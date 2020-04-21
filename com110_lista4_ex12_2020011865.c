#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x,a,b;
	a=1;
	b=20;
	printf("Crescente (1), decrescente (2), ímpares (3): \n");
	scanf("%d",&x);
	if(x==1)
	{
		while (a<=b)
		{
			printf("%d ",a);
			a++;
		}
	}
	else
	{
		if(x==2)
		{
			while(b>=a)
			{
				printf("%d ",b);
				b--;
			}
		}
		else
		{
			if(x==3)
			{
				while(a<=b)
				{
					printf("%d ",a);
					a++;
					a++;
				}
			}
		}
	}
	return 0;
}
