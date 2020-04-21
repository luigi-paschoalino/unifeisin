#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int m=0,n=0,a=0,i=0;
    do
	{
    	printf("\n Digite um número: ");
        scanf("%d",&a);
        if(i==0)
		{
            m=a;
            n=a;
            i++;
        }
		else if(a<0)
		{
        	break;
        }
		else if(a>m)
		{
        	m=a;
        }
		else if(a<n)
		{
            n=a;
        }
        }while(1);
        printf("\n\n Maior número: %d \n Menor número: %d ",m,n);
}
