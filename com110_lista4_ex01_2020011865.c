#include <stdio.h>
#include <math.h>

int main()
{
	int x, n, m;
	n=0;
	printf("Digite um numero positivo: ");
	scanf("%d", &x);
	if (x<=0)
		printf("\nEu disse positivo, ora bolas");
		else
		{
			while (n<=10)
			{
				m=pow(x,n);
				printf("\n%d",m);
				n++;
			}
		}
	return 0;
}
