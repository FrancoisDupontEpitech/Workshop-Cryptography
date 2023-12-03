#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substitute_decrypt(char *text, int shift) {
    // TODO: Complétez cette fonction pour implémenter le déchiffrage du code de substitution
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <text> <shift>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    int shift = atoi(argv[2]);

    substitute_decrypt(text, shift);
    printf("Result: %s\n", text);

    return 0;
}