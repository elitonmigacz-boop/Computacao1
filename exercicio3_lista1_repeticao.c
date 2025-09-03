#include <stdio.h>

int main()
{
	int n, i;
	float a, b, c, media;
	printf ("Digite o numero de casos de de teste: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		printf ("Digite os valores para calcular a media ponderada: ");
		scanf("%f %f %f", &a, &b, &c);

		media = (a*2 + b*3 + c*5) / 10.0;
		printf("A media ponderada eh: ");
		printf("%.1f\n", media);
	}

	return 0;
}
