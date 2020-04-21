#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y;
	printf("Velocidade atual: ");
	scanf("%f",&x);
	printf("\nVelocidade máxima: ");
	scanf("%f",&y);
	if (x<=y)
		printf("Não houve multa");
	else
	{
		if ((x>y) && (x<1.2*y))
			printf("O valor da multa é R$ 85,13");
		else
		{
			if ((x>=1.2*y) && (x<=1.5*y))
				printf("O valor da multa é R$ 127,69");
			else
			{
				if (x>1.5*y)
					printf("O valor da multa é R$ 574,62");
			}
		}
	}
	return 0;
}
