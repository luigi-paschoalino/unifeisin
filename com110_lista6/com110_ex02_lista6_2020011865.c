#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char gab[10],resp[10];
	int i,j,totap,apperc,pts;
	for(i=0;i<10;i++)
	{
		printf("\nResposta da questão %d: ",i+1);
		scanf("%s",&gab[i]);
	}
	totap=0;
	for(i=0;i<15;i++)
	{
		pts=0;
		for(j=0;j<10;j++)
		{
			printf("\nDigite a resposta dada pelo aluno %d para a %dª questão: ",i+1,j+1);
			scanf("%s",&resp[j]);
			if(resp[j]==gab[j])
				pts=pts+1;
		}
		printf("\nA nota do aluno %d foi %d",i+1,pts);
		if(pts>=6)
			totap=totap+1;
	}
	apperc=(totap*100)/15;
	printf("\nO percentual de aprovados é de %d %%",apperc);
	return 0;
}
