#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Op��o 1\nOp��o 2\nOp��o 3");

	do
	{
		printf("\nQual op��o voc� deseja? ");
		scanf("%d",&x);
		if ((x>3) || (x<1))
			printf("\nOp��o inv�lida, tente novamente");
	}while ((x>3) || (x<1));
	printf("\nOp��o %d escolhida",x);
	return 0;
}
