#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,i;
	printf("Massa, em quilogramas: ");
	scanf("%f",&x);
	printf("Altura, em metros: ");
	scanf("%f",&y);
	i=(x/pow(y,2));
	printf("Seu IMC: %.1f",i);
	return 0;
}
