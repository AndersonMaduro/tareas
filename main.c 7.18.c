#include <stdio.h>
#include <string.h>

void inverso(const char *);

int main(void) {
    char fra[50];

    printf("\nIngrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin);
    fra[strcspn(fra, "\n")] = '\0';

    printf("Escribe la línea de texto en forma inversa: ");
    inverso(fra);
    putchar('\n');

    return 0;
}

void inverso(const char *cadena) {
    if (cadena[0] != '\0') {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
