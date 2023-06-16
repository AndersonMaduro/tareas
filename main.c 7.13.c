#include <stdio.h>



int cuenta(char*);             

int main(void) {
    int i;
    char cad[51];  

    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);

    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char* cadena) {
    int c = 0;

    while (cadena[c] != '\0')  
        c++;

    return c;
}
