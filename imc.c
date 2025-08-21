#include <stdio.h>

int main() {
	float altura = 1.64;
	float peso = 62.5;
	float imc;

	printf("Calculo do IMC\n");
	printf("Altura: %.2f m\n", altura);
	printf("Peso: %.2f kg\n", peso);

	imc = peso / (altura * altura);
	printf("IMC: %.2f\n", imc);

	return 0;
}
