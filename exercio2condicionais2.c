#include <stdio.h>
#include<math.h>

int main() {


	float a, b, c, resultado ;
	char opcao;
	printf("Opcao: ");
	scanf("%c", &opcao);

	printf("Digite tres numeros: ");
	scanf("%f %f %f", &a, &b, &c);

	printf("\nEscolha o tipo de media:\n");
	printf("A - Aritimetica\n");
	printf("P - Ponderada\n");
	printf("G - Geometrica\n");
	printf("H - Harmonica\n");


	if (opcao == 'A' || opcao == 'a') {
		resultado = (a + b + c) / 3.0;
		printf("\nMedia Aritimetica = %2lf\n",resultado);
	}

	else if (opcao == 'P' || opcao == 'p') {
		resultado = (a*1 + b*2 + c*3) / 6.0;
		printf("\nmedia Ponderada = %2lf\n", resultado);
	}
	else if (opcao == 'G' || opcao == 'g') {
		if (a> 0 && b > 0 && c > 0) {
			resultado = cbrt(a*b*c);
			printf("\nmedia Geometrica = %2lf\n", resultado);
		}
	}
	else if (opcao == 'H' || opcao == 'h') {
		if (a != 0 && b != 0 && c != 0 ) {
			resultado = 3.0 / ( (1.0/a) + (1.0/b) + (1.0/c) );
			printf("\nmedia Harmonica = %2lf\n", resultado);
		}
	}
	else {
		printf("\nopcao invalida\n");
	}
	return 0;
}