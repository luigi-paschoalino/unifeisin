#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int X[8],i,j,aux,menor;
	for(i=0;i<8;i++)
	{
		printf("\nDigite X[%d]: ",i);
		scanf("%d",&X[i]);
	}
	for(i=0;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(X[i]>X[j]) //Trocando a posição do vetor entre o valor atual e o menor encontrado nas posições posteriores
			{
				menor=j;
				aux=X[i]; //Variável aux apenas para possibilitar a troca de valores entre X[i] e X[menor], visto que não temos swap em C :(
				X[i]=X[menor];
				X[menor]=aux;
			}
		}
	}
	for(i=0;i<8;i++)
	{
		printf("\n%d",X[i]);
	}
	return 0;
}
