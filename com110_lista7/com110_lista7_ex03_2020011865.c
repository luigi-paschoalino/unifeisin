#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float m[4][7],minmax;
	int i,j,imenor,jminmax;
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("\nDigite o valor da linha %d e coluna %d: ",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
	float menor=m[1][1];
	for(i=0;i<4;i++)
	{
		for(j=0;j<7;j++)
		{
			if(m[i][j]<menor)
			{
				menor=m[i][j];
				imenor=i;
			}
		}
	}
	for(j=0;j<7;j++)
	{
		if(m[imenor][j]>minmax)
		{
			minmax=m[imenor][j];
			jminmax=j;
		}
	}
	printf("O valor MINMAX é %.2f e se encontra na linha %d e coluna %d",minmax,imenor+1,jminmax+1);
	return 0;
}
