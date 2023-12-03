#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void decrypt(char *text, int shift) {
    // TODO: Complétez cette fonction pour déchiffrer le texte avec le Chiffre de César
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <text_to_decrypt> <shift>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    int shift = atoi(argv[2]);

    decrypt(text, shift);
    printf("Result: %s\n", text);

    return 0;
}
