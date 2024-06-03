/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main(){
	int hora;
	float k=11.25, res;
	printf ("programa para saber cuantos km/h ha recorrido el antilope\n");
	scanf ("%d",&hora);
	
	res=hora*k;
	
	printf ("Los kilometros recorridos por el antilope son: %f",res);
	return 0;
}