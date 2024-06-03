/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int h;
    int d;
 
    printf("Programa para saber cuántos km nada un atún\n"); 
    printf("Ingrese las horas que haya nadado el atun: ");
    scanf("%d", &h); 
    
    d = h * 24;
 
    printf("La distancia recorrida por el atún es: %d km\n", d); 
 
    return 0;
}
