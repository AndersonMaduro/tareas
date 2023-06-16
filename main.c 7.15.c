#include <stdio.h>
#include <ctype.h>



void interpreta(char*);                   

int main(void) {
    char cad[51];

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    interpreta(cad);
}

void interpreta(char* cadena) {
    int i = 0, j, k;

    while (cadena[i] != '\0') {
        if (isalpha(cadena[i])) {
            k = cadena[i - 1] - '0';
            
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
