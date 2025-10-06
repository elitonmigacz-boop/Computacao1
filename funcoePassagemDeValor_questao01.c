#include <stdio.h>

int ehBissexto(int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

int main() {
	int ano;

	printf("Digite um ano: ");
	if (scanf("%d", &ano) == 1 && ano > 0) {
		if (ehBissexto(ano)) {
			printf("O ano %d eh bissexto.\n", ano);
		} else {
			printf("O ano %d nao eh bissexto.\n", ano);
		}
	}

	return 0;
}
