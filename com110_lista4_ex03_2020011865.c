#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Opção 1\nOpção 2\nOpção 3");

	do
	{
		printf("\nQual opção você deseja? ");
		scanf("%d",&x);
		if ((x>3) || (x<1))
			printf("\nOpção inválida, tente novamente");
	}while ((x>3) || (x<1));
	printf("\nOpção %d escolhida",x);
	return 0;
}
