#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int dado[20],f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,i; //Vetor dos valores do dado e número de vezes de cada face
	for(i=0;i<20;i++)
	{
		printf("\nDigite o valor da face do %dº arremesso: ",i+1);
		scanf("%d",&dado[i]);
		if(dado[i]==1)
			f1=f1+1;
		else if(dado[i]==2)
			f2=f2+1;
		else if(dado[i]==3)
			f3=f3+1;
		else if(dado[i]==4)
			f4=f4+1;
		else if(dado[i]==5)
			f5=f5+1;
		else if (dado[i]==6)
			f6=f6+1;
		else if((dado[i]<1)||(dado[i]>6))
			printf("Arremesso inválido e não será contabilizado.");
	}
	printf("Frequência das faces 1 a 6, respectivamente: %d, %d, %d, %d, %d, %d",f1,f2,f3,f4,f5,f6);
	return 0;
}
