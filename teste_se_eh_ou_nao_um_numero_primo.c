#include <stdio.h>

int main()
{
	int n, divi, eh_primo;
	printf("Digite um valor para testar se eh ou nao um numero primo:");
	scanf("%d", &n);
	while(n != -1)
	{
		eh_primo = 1;
		for(divi = 2; divi < n && eh_primo; divi++)
			if (n%divi == 0)
				eh_primo = 0;

		if(eh_primo)
			printf("%d Eh um numero primo. \n", n);
		else
			printf(" Nao eh um numero primo. \n", n);

		printf("Digite um valor para testar se eh ou nao um numero primo:");
		scanf("%d", &n);
	}
	return 0;
}
