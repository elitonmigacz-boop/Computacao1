#include <stdio.h>

void converteHora(int totalSegundos, int *hora, int *min, int *seg);

int main()
{
	int totalSegundos;
	int hora, min, seg;

	printf("Digite o total de segundos: ");
	scanf("%d", &totalSegundos);

	converteHora(totalSegundos, &hora, &min, &seg);

	printf("Segundos convertidos em HH:MM:SS: %02d:%02d:%02d\n", hora, min, seg);

	return 0;
}

void converteHora(int totalSegundos, int *hora, int *min, int *seg) {
	*hora = totalSegundos / 3600;
	totalSegundos = totalSegundos % 3600;
	*min = totalSegundos / 60;
	*seg = totalSegundos % 60;
}
