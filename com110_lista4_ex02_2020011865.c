#include <stdio.h>
#include <math.h>

int main()
{
	int n, m, e;
	n=0;
	printf("Qual o expoente maximo desejado? ");
	scanf("%d",&e);
	while (n<=e)
	{
		m=pow(3, n);
		printf("\n%d", m);
		n++;
	}
	return 0;
}
