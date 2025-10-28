#include <stdio.h>

int main()
{
	int n, i;

	for (n=1; n<=10; n++)
	{
		printf("A tabuada do %d eh:\n", n);
		for (i = 1; i<= 10; i++)
		{
			printf("%d x %2d = %d\n", n, i, n*i);
		}
		printf("\n");
	}

	return 0;
}
