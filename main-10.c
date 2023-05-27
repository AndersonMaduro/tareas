#include <stdio.h>

int main() {
    int numero, digito;
    
    printf("Ingrese un número de cuatro dígitos: ");
    scanf("%d", &numero);
    
    // Imprimir los dígitos en líneas separadas
    digito = numero / 1000;  // Primer dígito
    printf("%d\n", digito);
    
    digito = (numero / 100) % 10;  // Segundo dígito
    printf("%d\n", digito);
    
    digito = (numero / 10) % 10;  // Tercer dígito
    printf("%d\n", digito);
    
    digito = numero % 10;  // Cuarto dígito
    printf("%d\n", digito);
}
