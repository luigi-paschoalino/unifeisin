#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int qtdlet,chave,i;
	char palavra[qtdlet+1];
	printf("Para o funcionamento deste c�digo, digite a palavra apenas com letras min�sculas.");
	printf("\nDigite a palavra: ");
	gets(palavra);
	printf("\nQuantidade de letras da palavra digitada: ");
	scanf("%d",&qtdlet);
	printf("\nValor da chave da Cifra de C�sar: ");
	scanf("%d",&chave);
	for(i=0;i<qtdlet;i++)
	{	
		//Visto que cada letra possui um valor �nico na ASCII, precisamos garantir que ele fique dentro dos valores do alfabeto
		if(palavra[i]+chave<97)
			printf("%c",palavra[i]+chave+26); //Este aqui � para quando a chave for negativa e a soma da chave e o caractere for menor que o valor da letra "a"
		else if(palavra[i]+chave>122)
			printf("%c",palavra[i]+chave-26); //Este � para quando o valor for maior que a da letra "z"
		else
			printf("%c",(palavra[i])+chave); //Este � nos casos normais
	}
	return 0;
}
