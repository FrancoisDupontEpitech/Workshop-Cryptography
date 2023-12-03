#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substitute_encrypt(char *text, int shift) {
    // TODO: Complétez cette fonction pour pour implémenter le chiffrement de substitution
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <text> <shift>\n", argv[0]);
        return 1;
    }

    char *text = argv[1];
    int shift = atoi(argv[2]);

    substitute_encrypt(text, shift);
    printf("Result: %s\n", text);

    return 0;
}