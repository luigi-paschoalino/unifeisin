#include <stdio.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int d,m,a,i;
	printf("Dia de nascimento: ");
	scanf("%d",&d);
	printf("\nMês do nascimento: ");
	scanf("%d",&m);
	printf("\nAno do nascimento: ");
	scanf("%d",&a);
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	if(m>tm.tm_mon+1)
		i=(tm.tm_year+1899-a);
	else
	{
		if((d>tm.tm_mday) && (m<=tm.tm_mon+1))
			i=(tm.tm_year+1899-a);	
		else
		{
			if((m<=tm.tm_mon+1) && (d<=tm.tm_mday))
				i=(tm.tm_year+1900-a);	
		}
	}
	printf("Você tem %d anos.",i);
	return 0;
}
