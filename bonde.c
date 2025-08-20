#include <stdio.h>

int main() {
	int monitores, alunos, soma;


	printf ("digite o numero de monitores: ");
	scanf("%d", &monitores);

	printf("digite o numero de alunos: ");
	scanf("%d", &alunos);

	soma = monitores + alunos;

	if (soma <= 50)
		printf ("Podem fazer apenas uma viagem.");
	else 
		printf("Nao podem fazer apenas uma viagem");

	return 0;

}
