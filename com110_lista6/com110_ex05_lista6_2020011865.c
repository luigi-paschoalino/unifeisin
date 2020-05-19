#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int qtdlet,chave,i;
	char palavra[qtdlet+1];
	printf("Para o funcionamento deste código, digite a palavra apenas com letras minúsculas.");
	printf("\nDigite a palavra: ");
	gets(palavra);
	printf("\nQuantidade de letras da palavra digitada: ");
	scanf("%d",&qtdlet);
	printf("\nValor da chave da Cifra de César: ");
	scanf("%d",&chave);
	for(i=0;i<qtdlet;i++)
	{	
		if(palavra[i]+chave<97)
			printf("%c",palavra[i]+chave+26);
		else if(palavra[i]+chave>122)
			printf("%c",palavra[i]+chave-26);
		else
			printf("%c",(palavra[i])+chave);
	}
	return 0;
}
