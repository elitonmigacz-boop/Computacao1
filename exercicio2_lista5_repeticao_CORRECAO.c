#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numero, tentativa, contagem = 0;

	srand(time(0));

	numero = rand() % 500 + 1;

	printf("Tente adivinhar o numero entre 0 e 500! \n");

	printf("Digite a sua tentativa: ");
	scanf ("%d", &tentativa);
	contagem++;

	while(tentativa != numero) {
		if(tentativa > numero) {
			printf("O numero eh menor! \n");
		} else {
			printf ("O numero eh maior! \n");
		}

		printf("Digite a sua tentativa: ");
		scanf("%d", &tentativa);
		contagem++;
	}

	printf("\n parabens voce acertou o numero em %d tentativas!\n", contagem);

	if(contagem <= 3) {
		printf ("\\o/\n");
	} else if (contagem <= 6) {
		printf(":-D\n");
	} else if (contagem <= 10) {
		printf (":-)\n");
	} else {
		printf(":-\\\n");
	}

	return 0;

}
