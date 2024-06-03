/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int p;
    float costo;
 
    printf("Programa para saber el costo total de los panes que se iran a comprar\n"); 
    printf("Ingrese la cantidad de panes que quiere comprar: ");
    scanf("%d", &p); //el señor felix vende sus panes a 20bs cada uno porque es un carero//
    
    costo = p*20;
    
    printf("costo total: %.2f bs\n", costo); 
 
    return 0;
}