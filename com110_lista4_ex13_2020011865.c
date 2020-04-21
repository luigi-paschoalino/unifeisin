#include <stdio.h>

int main()
{
	int x,y,z;
	printf("Menor valor: ");
	scanf("%d",&x);
	printf("\nMaior valor: ");
	scanf("%d",&y);
	printf("\n");
	for (z=x;z<=y;z++)
	{
		printf("%d ",z);
	}
	return 0;
}
