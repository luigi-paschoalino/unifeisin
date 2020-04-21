#include <stdio.h>

int main()
{
	int j,i,y,x;
	printf("Menor valor: ");
	scanf("%d",&x);
	printf("\nMaior valor: ");
	scanf("%d",&y);
	printf("\nTabuada de %d a %d\n",x,y);
	for(i=0;i<=10;i++)
	{
    for(j=x;j<=y;j++)
    {
    	if (j<=y-1)
        	printf("%d x %d = %d, ",j,i,i*j);
        else
	printf("%d x %d = %d",j,i,i*j);
    }
    printf("\n");
    }
	return 0;
}
