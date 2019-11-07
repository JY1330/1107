#include <stdio.h>

void printOptions()
{
	printf("************************************\n");
	printf("'C' ¼·¾¾ ¿Âµµ¿¡¼­ È­¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'F' È­¾¾ ¿Âµµ¿¡¼­ ¼·¾¾ ¿Âµµ·Î º¯È¯\n");
	printf("'Q' Á¾·á\n");
	printf("************************************\n");
}

double c2f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double f2c(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
	char choice;
	double temp;
	
	while(1)
	{
		printOptions();
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä:");
		choice=getchar();
		if(choice == 'Q')
			break;
		else if(choice == 'C')
		{
			printf("¼·¾¾ ¿Âµµ:");
			scanf("%lf", &temp);
			printf("È­¾¾ ¿Âµµ: %lf\n", c2f(temp)); 
		}
		else if(choice == 'F')
		{
			printf("È­¾¾ ¿Âµµ:");
			scanf("%lf", &temp);
			printf("¼·¾¾ ¿Âµµ: %lf\n", f2c(temp)); 
		}
		getchar();
	}
	return 0;
}
