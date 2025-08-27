#include <stdio.h>

int main() {
	float A, B, C;

	printf("Digite o valor do lado A: ");
	scanf("%f", &A);
	printf("Digite o valor do lado B: ");
	scanf("%f", &B);
	printf("Digite o valor do lado C: ");
	scanf("%f", &C);


	if ((A < B + C) && (B < A + C) && (C < A + B)) {

		if (A == B && B == C) {
			printf("Triangulo Equilatero\n");
		}
		else if (A == B || A == C || B == C) {
			printf("Triangulo Isosceles\n");
		}
		else {
			printf("Triangulo Escaleno\n");
		}
	}
	else {
		printf("Nao formam um triangulo\n");
	}

	return 0;
}
