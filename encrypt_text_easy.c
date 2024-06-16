#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* str;

void to_lowercase(str text){
    for(int i = 0; text[i]; i++){
        text[i] = tolower(text[i]);
    }
}

str encrypt_text(str text) {

    int text_size = strlen(text);
    str encrypted_text = (str)malloc((text_size + 1) * sizeof(char));
    if (encrypted_text == NULL){
        fprintf(stderr, "Memory Allocation Failed\n");
        exit(1);
    }
    int shift = 3;

    str lowercase_text = strdup(text);
    if (lowercase_text == NULL) {
        fprintf(stderr, "Memory Allocation Failed\n");
        exit(1);
    }
    to_lowercase(lowercase_text);

    for(int i = 0; i < text_size; i++) {
        if (lowercase_text[i] >= 'a' && lowercase_text[i] <= 'z') {
            encrypted_text[i] = ((lowercase_text[i] - 'a' + shift) % 26) + 'a';
        } else {
            encrypted_text[i] = lowercase_text[i];
        }
    }

    encrypted_text[text_size] = '\0';

    return encrypted_text;
}


int main (int argc, char *argv[]) {
    char text[100];

    printf("Enter text to encrypt: ");

    if (fgets(text, sizeof(text), stdin) != NULL) {

        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }

        str encrypted_text = encrypt_text(text);

        printf("Original txt: %s\n", text);
        printf("Encrypted txt: %s\n", encrypted_text);

        free(encrypted_text);
    } else {
        printf("Error reading input. \n");
    }
    return 0;

}
