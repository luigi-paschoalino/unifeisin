#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float x,y,a,s,m,d;
	printf("Primeiro numero: ");
	scanf("%f",&x);
	printf("\nSegundo numero: ");
	scanf("%f",&y);
	a=(x+y);
	printf("\nAdi��o: %.2f",a);
	s=(x-y);
	printf("\nSubtra��o: %.2f",s);
	m=(x*y);
	printf("\nMultiplica��o: %.2f",m);
	d=(x/y);
	printf("\nDivis�o: %.2f",d);
	return 0;
}
