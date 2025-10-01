#include <stdio.h>
#include <math.h>

int main() {
	double numero;

	printf("Digite um numero: ");

	if (scanf("%lf", &numero) == 1) {

		double arredondado = round(numero);

		printf("Numero arredondado: %2.f\n", arredondado);
	}
	return 0;
}
