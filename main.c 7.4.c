#include <stdio.h>



int main(void) {
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);
  
    cad0 = "Brasil"; 
    puts(cad0);

    char cad1[20] = ""; 
    gets(cad1); 

    char cad2[20] = "México"; /* Correcto. */
    puts(cad2);
    gets(cad2);

    puts(cad2);

  
    cad2[10] = 'G';

    
}
