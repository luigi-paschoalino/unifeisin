#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n, c, k;
	printf("Altura do tri�ngulo: ");
	scanf("%d", &n);
	if (n<2)
		printf("\nValor inv�lido");
	else
	{
		for (c=1;c<=n;c++)
		{
    		for(k=1;k<=c;k++)
    		printf("#");
    		printf("\n");
		}
	}
  return 0;
}
