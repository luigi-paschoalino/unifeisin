#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	printf("Sua hora atual é %d", tm.tm_hour);
	if ((tm.tm_hour>=5) && (tm.tm_hour<=11))
		printf("\nManhã");
	else
	{
		if ((tm.tm_hour>=12) && (tm.tm_hour<=17))
			printf("\nTarde");
		else
		{
			if ((tm.tm_hour>=18) || (tm.tm_hour<=4))
				printf("\nNoite");
		}
	}
	return 0;
}
