#include <stdio.h>
#include <string.h>

void intercambia(char [][30], int);

int main(void) {
    int i, n;
    char FRA[20][30];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Ingrese la línea de texto número %d: ", i+1);
        fflush(stdin);
        fgets(FRA[i], sizeof(FRA[i]), stdin);
        FRA[i][strcspn(FRA[i], "\n")] = '\0';
    }

    printf("\n\n");

    intercambia(FRA, n);

    for (i = 0; i < n; i++) {
        printf("Impresión de la línea de texto %d: ", i+1);
        puts(FRA[i]);
    }

    return 0;
}

void intercambia(char FRA[][30], int n) {
    int i, j;
    j = n - 1;
    char cad[30];

    for (i = 0; i < (n/2); i++) {
        strcpy(cad, FRA[i]);
        strcpy(FRA[i], FRA[j]);
        strcpy(FRA[j], cad);
        j--;
    }
}
