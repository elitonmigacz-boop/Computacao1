#include <stdio.h>
#define PRIMEIRA 5
#define SEGUNDA 14

int main()
{
	int  quantidade_1,  quantidade_2;
	float valor;

	printf("Digite a quantidade: ");
	scanf("%d", &quantidade_1);

	printf("Digite a quantidade: ");
	scanf("%d", &quantidade_2);

	valor = ((quantidade_1 + quantidade_2) * (SEGUNDA - PRIMEIRA)) / 2;

	if(valor > quantidade_1) {
		printf( "O resultado eh %.2f e as quatidades sao: %d e %d", valor, quantidade_1, quantidade_2);
	} else {
		printf("O resultado eh %.2f e as quantidades sao %d e %d", valor * 0.8, quantidade_1, quantidade_2);
	}

	return 0;
}
