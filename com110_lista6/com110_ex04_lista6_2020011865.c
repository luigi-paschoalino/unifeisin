#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char x[10];
	int i;
	printf("\nDigite um palavra de 10 caracteres: ");
	gets(x); //Comando que atribui cada caractere digitado a uma posi��o no vetor, possibilitando digitar uma palavra inteira :)
	printf("Sua palavra de tr�s para frente ficar�: ");
	for(i=9;i>=0;i--)
		printf("%c",x[i]);
	return 0;
}
