#include <stdio.h>
#include <string.h>

#define LINHAS 3
#define COLUNAS 3
#define TAM 51

char paraMinusculo(char c);
int ehVogal(char c);
int ehConsoante(char c);
void inverterString(char str[]);

int main()
{
	char matrizOriginal[LINHAS][COLUNAS][TAM];
	char matrizModificada[LINHAS][COLUNAS][TAM];
	char primeiro, ultimo;
	int i, j, tam;
	
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("Digite a string da posicao [%d][%d]: ", i, j);
			scanf("%50s", matrizOriginal[i][j]);
			strcpy(matrizModificada[i][j], matrizOriginal[i][j]);
		}
	}

	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			primeiro = matrizModificada[i][j][0];
			tam = strlen(matrizModificada[i][j]);
			ultimo = matrizModificada[i][j][tam - 1];

			if (ehVogal(primeiro) && ehConsoante(ultimo))
			{
				inverterString(matrizModificada[i][j]);
			}
		}
	}

	printf("\nMatriz Original:\n");
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("%s\t", matrizOriginal[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz Modificada:\n");
	for (i = 0; i < LINHAS; i++)
	{
		for (j = 0; j < COLUNAS; j++)
		{
			printf("%s\t", matrizModificada[i][j]);
		}
		printf("\n");
	}

	return 0;
}

char paraMinusculo(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + ('a' - 'A');
	}
	return c;
}

int ehVogal(char c)
{
	c = paraMinusculo(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int ehConsoante(char c)
{
	c = paraMinusculo(c);
	return (c >= 'a' && c <= 'z' && !ehVogal(c));
}

void inverterString(char str[])
{
	int i = 0;
	int j = strlen(str) - 1;
	char temp;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

