#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int m[8][8],i,j,cond;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("\nDigite o valor da linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	cond=1;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(m[i][j]!=m[j][i])
			{
				cond=0;
				break;
			}
		}
	}
	if(cond==1)
		printf("\nMatriz simétrica");
	else if(cond==0)
		printf("\nMatriz assimétrica");
	return 0;
}
