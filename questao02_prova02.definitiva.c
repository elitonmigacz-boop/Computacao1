#include <stdio.h>

#define TAM 10

float calculaMedia(int vetor[], int tamanho);

int main(void) {
	FILE *arquivo;
	int numeros[TAM];
	float media;

	arquivo = fopen("numeros.txt", "w");

	printf("Digite %d numeros inteiros:\n", TAM);
	for (int i = 0; i < TAM; i++) {
		int num;
		printf("Numero %d: ", i + 1);
		scanf("%d", &num);
		fprintf(arquivo, "%d\n", num);
	}
	fclose(arquivo);

	arquivo = fopen("numeros.txt", "r");
	for (int i = 0; i < TAM; i++) {
		fscanf(arquivo, "%d", &numeros[i]);
	}
	fclose(arquivo);

	media = calculaMedia(numeros, TAM);

	printf("\nNumeros lidos do arquivo:\n");
	for (int i = 0; i < TAM; i++) {
		printf("%d ", numeros[i]);
	}

	printf("\nA media dos numeros lidos do arquivo eh:\n %.2f", media);

	return 0;
}

float calculaMedia(int vetor[], int tamanho) {
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += vetor[i];
	}
	return (float)soma / tamanho;
}
