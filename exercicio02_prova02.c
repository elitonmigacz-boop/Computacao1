#include <stdio.h>
#include <stdlib.h>

#define TAM 10

float calculaMedia(int vetor[], int tamanho) {
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += vetor[i];
	}
	return (float)soma / tamanho;
}

int main() {
	FILE *arquivo;
	int numeros[TAM];
	float media;

	arquivo = fopen("numeros.txt", "w");
	if (arquivo == NULL) {
		printf("Erro ao criar o arquivo.\n");
		return 1;
	}

	printf("Digite %d numeros inteiros:\n", TAM);
	for (int i = 0; i < TAM; i++) {
		int num;
		printf("Numero %d: ", i + 1);
		scanf("%d", &num);
		fprintf(arquivo, "%d\n", num);
	}

	fclose(arquivo);

	arquivo = fopen("numeros.txt", "r");
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1;
	}

	for (int i = 0; i < TAM; i++) {
		fscanf(arquivo, "%d", &numeros[i]);
	}

	fclose(arquivo);

	media = calculaMedia(numeros, TAM);

	printf("\nNumeros lidos do arquivo:\n");
	for (int i = 0; i < TAM; i++) {
		printf("%d ", numeros[i]);
	}

	printf("\nMedia dos numeros: %.2f\n", media);

	return 0;
}
