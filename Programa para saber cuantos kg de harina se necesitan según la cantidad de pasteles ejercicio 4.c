/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int p;
    float harina;
 
    printf("Programa para saber cuantos kg de harina se necesitan según la cantidad de pasteles que se vayan ha hacer\n"); 
    printf("coleque el número de pasteles: ");
    scanf("%d", &p); //La señora maria para hacer 100 pasteles requiere de 3kg de harina, la formula para calcular la cantidad de harina necesaria es la siguiente//
    
    harina = p*3/100.0;
 
    printf("para hacer %d",p);
    printf(" pasteles, se necesita: %.2f kg\n", harina); 
 
    return 0;
}