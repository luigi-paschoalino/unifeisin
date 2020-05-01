#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//"o" é opção, "lo" é lado maior, "lh" é lado menor, "l" é para figuras com mesmo lado
	//a=área e p=perímetro
	int o,lo,lh,l;
	float a,p;
	setlocale(LC_ALL, "Portuguese");
	//Programa todo em do while, para printar pelo menos uma vez o menu
	do
	{
		//Por enquanto só o menu tá completo, pensando em como montar as figuras
		//Fica até feio com tanto printf
		printf("\n######################################################");
		printf("\n################### MENU DE OPÇÕES ###################");
		printf("\n######################################################");
		printf("\n##                                                  ##");
		printf("\n## Escolha uma forma geométrica:                    ##");
		printf("\n##                                                  ##");
		printf("\n## 1. Quadrado                                      ##");
		printf("\n## 2. Retângulo                                     ##");
		printf("\n## 3. Triângulo equilátero                          ##");
		printf("\n## 4. Triângulo retângulo (catetos iguais)          ##");
		printf("\n## 5. Outra                                         ##");
		printf("\n## 6. Sair                                          ##");
		printf("\n##                                                  ##");
		printf("\n######################################################");
		printf("\n######################################################\n");
		printf("\n  Opção: ");
		scanf("%d",&o);
		if((o<1)||(o>6))
			printf("\nOpção inválida, tente novamente.");
		else if(o==1)
		{
			printf("\n==================================================");
			printf("\n QUADRADO");
			printf("\n==================================================");
			printf("\nDigite o lado do quadrado: ");
			scanf("%d",&l);
			a=l*l;
			p=l*4;
			printf("\nÁrea: %.2f",a);
			printf("\nPerímetro: %.2f",p);
		}
		else if(o==2)
		{
			printf("\n==================================================");
			printf("\n RETÂNGULO");
			printf("\n==================================================");
			printf("\nDigite o comprimento do retângulo: ");
			//"lo" nesse caso é o "lado horizontal"
			scanf("%d",&lo);
			printf("\nDigite a altura do retângulo: ");
			//Altura é o "lh"
			scanf("%d",&lh);
			a=lh*lo;
			p=(2*lh)+(2*lo);
			printf("\nÁrea: %.2f",a);
			printf("\nPerímetro: %.2f",p);
		}
		else if(o==3)
		{
			printf("\n==================================================");
			printf("\n TRIÂNGULO EQUILÁTERO");
			printf("\n==================================================");
			printf("\nDigite o lado do triângulo equilátero: ");
			scanf("%d",&l);
			printf("\n");
			//Quadrado de l vezes a raiz de 3 dividido por 4
			a=(pow(l,2)*sqrt(3))/4;
			p=l*3;
			printf("\nÁrea: %.2f",a);
			printf("\nPerímetro: %.2f",p);
		}
		else if(o==4)
		{
			printf("\n==================================================");
			printf("\n TRIÂNGULO RETÂNGULO (CATETOS IGUAIS)");
			printf("\n==================================================");
			printf("\nDigite a medida do cateto: ");
			scanf("%d",&l);
			a=(l*l)/2;
			//2 vezes o lado mais a hipotenusa
			p=(2*l)+hypot(l,l);
			printf("\nÁrea: %.2f",a);
			printf("\nPerímetro: %.2f",p);
		}
		else if(o==5)
		{
			printf("\n==================================================");
			printf("\n OUTRA");
			printf("\n==================================================");
		}
	//Tudo isso enquanto "o" for diferente de 6
	}while(o!=6);
	return 0;
}
