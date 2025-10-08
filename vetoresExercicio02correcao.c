#include <stdio.h>
#define N 5

int main()
{
	int vetor[N];
	int i, posicao;

	vetor[0] = 1;
	vetor[1] = 3;
	vetor[2] = 6;
	vetor[3] = 2;
	vetor[4] = 10;

	printf("Vetor original:\n");
	for (i = 0; i < N; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");


	printf("Digite uma posicao entre 0 e %d para ser removida: ", N - 1);
	scanf("%d", &posicao);
	if (posicao < 0 || posicao >= N) {
		printf("Posicao invalida.\n");
		return 1;
	}

	for (i = posicao; i < N - 1; i++) {
		vetor[i] = vetor[i + 1];
	}

	printf("Vetor depois da remocao:\n");
	for (i = 0; i < N - 1; i++) {
		printf("%d ", vetor[i]);
	}
	printf("\n");

	return 0;
}
