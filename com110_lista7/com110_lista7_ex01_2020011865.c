#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int m[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nDigite o valor da linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	int maior=m[1][1];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(m[i][j]>maior)
				maior=m[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",m[i][j]*maior);
		printf("\n");
	}
	return 0;
}
