#include <stdio.h>

void removeExtremos(int *n, int *pri, int *ult)
{
	int tn, pot;
	
	*ult = *n % 10;
	
	pot = 1;
	tn = *n;
	while (tn >= 10) {
		tn = tn / 10;
		pot *= 10;
	}
	*pri = *n / pot;
	
	*n = *n % pot;
	*n = *n / 10;
}

int main() {
	int n, copia, pri, ult, palindromo;

	printf("Digite um numero positivo: ");
	scanf("%d", &n);

	copia = n;
	palindromo = 1;

	while (copia >= 10 && palindromo == 1) {
		removeExtremos(&copia, &pri, &ult);
		if (pri != ult) {
			palindromo = 0;
		}
	}

	if (palindromo == 1) {
		printf("%d eh um palindromo.\n", n);
	} else {
		printf("%d nao eh um palindromo.\n", n);
	}

	return 0;
}
