/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	float n1, n2, aux;
	
	printf("digite o primeiro valor:");
	scanf("%2f", &n1);
	printf("digite o segundo valor:");
	scanf("%2f", &n2);
	
	aux=n1 + n2;
	
	printf("%.2f", aux);

 return 0;
	
}