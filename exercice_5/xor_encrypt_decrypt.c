#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void xor_encrypt_decrypt(char *text, char key) {
    // TODO: Complétez cette fonction pour implémenter le chiffrement XOR
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <text> <key>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    char key = argv[2][0];

    xor_encrypt_decrypt(text, key);
    printf("Result: %s\n", text);

    return 0;
}
