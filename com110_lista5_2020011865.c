#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	//"o" � op��o, "lo" � lado maior, "lh" � lado menor, "l" � para figuras com mesmo lado
	//a=�rea e p=per�metro
	int o,lo,lh,l;
	float a,p;
	setlocale(LC_ALL, "Portuguese");
	//Programa todo em do while, para printar pelo menos uma vez o menu
	do
	{
		//Por enquanto s� o menu t� completo, pensando em como montar as figuras
		//Fica at� feio com tanto printf
		printf("\n######################################################");
		printf("\n################### MENU DE OP��ES ###################");
		printf("\n######################################################");
		printf("\n##                                                  ##");
		printf("\n## Escolha uma forma geom�trica:                    ##");
		printf("\n##                                                  ##");
		printf("\n## 1. Quadrado                                      ##");
		printf("\n## 2. Ret�ngulo                                     ##");
		printf("\n## 3. Tri�ngulo equil�tero                          ##");
		printf("\n## 4. Tri�ngulo ret�ngulo (catetos iguais)          ##");
		printf("\n## 5. Outra                                         ##");
		printf("\n## 6. Sair                                          ##");
		printf("\n##                                                  ##");
		printf("\n######################################################");
		printf("\n######################################################\n");
		printf("\n  Op��o: ");
		scanf("%d",&o);
		if((o<1)||(o>6))
			printf("\nOp��o inv�lida, tente novamente.");
		else if(o==1)
		{
			printf("\n==================================================");
			printf("\n QUADRADO");
			printf("\n==================================================");
			printf("\nDigite o lado do quadrado: ");
			scanf("%d",&l);
			a=l*l;
			p=l*4;
			printf("\n�rea: %.2f",a);
			printf("\nPer�metro: %.2f",p);
		}
		else if(o==2)
		{
			printf("\n==================================================");
			printf("\n RET�NGULO");
			printf("\n==================================================");
			printf("\nDigite o comprimento do ret�ngulo: ");
			//"lo" nesse caso � o "lado horizontal"
			scanf("%d",&lo);
			printf("\nDigite a altura do ret�ngulo: ");
			//Altura � o "lh"
			scanf("%d",&lh);
			a=lh*lo;
			p=(2*lh)+(2*lo);
			printf("\n�rea: %.2f",a);
			printf("\nPer�metro: %.2f",p);
		}
		else if(o==3)
		{
			printf("\n==================================================");
			printf("\n TRI�NGULO EQUIL�TERO");
			printf("\n==================================================");
			printf("\nDigite o lado do tri�ngulo equil�tero: ");
			scanf("%d",&l);
			printf("\n");
			//Quadrado de l vezes a raiz de 3 dividido por 4
			a=(pow(l,2)*sqrt(3))/4;
			p=l*3;
			printf("\n�rea: %.2f",a);
			printf("\nPer�metro: %.2f",p);
		}
		else if(o==4)
		{
			printf("\n==================================================");
			printf("\n TRI�NGULO RET�NGULO (CATETOS IGUAIS)");
			printf("\n==================================================");
			printf("\nDigite a medida do cateto: ");
			scanf("%d",&l);
			a=(l*l)/2;
			//2 vezes o lado mais a hipotenusa
			p=(2*l)+hypot(l,l);
			printf("\n�rea: %.2f",a);
			printf("\nPer�metro: %.2f",p);
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
