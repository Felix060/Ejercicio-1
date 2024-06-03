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
 
    printf("Programa para saber cuantos km/h nada un pinguino\n"); 
    printf("Ingrese las horas que nado el pinguino: ");
    scanf("%d", &h); //el pingüino recorre 120km en 3 h, si dividimos 120/3= 40, siendo 40km/h//
    
    d = h * 40;
 
    printf("La distancia recorrida por el pingüino es de: %d km\n", d); 
 
    return 0;
}