#include <stdio.h>

void printOptions()
{
	printf("************************************\n");
	printf("'C' ���� �µ����� ȭ�� �µ��� ��ȯ\n");
	printf("'F' ȭ�� �µ����� ���� �µ��� ��ȯ\n");
	printf("'Q' ����\n");
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
		printf("�޴��� �����ϼ���:");
		choice=getchar();
		if(choice == 'Q')
			break;
		else if(choice == 'C')
		{
			printf("���� �µ�:");
			scanf("%lf", &temp);
			printf("ȭ�� �µ�: %lf\n", c2f(temp)); 
		}
		else if(choice == 'F')
		{
			printf("ȭ�� �µ�:");
			scanf("%lf", &temp);
			printf("���� �µ�: %lf\n", f2c(temp)); 
		}
		getchar();
	}
	return 0;
}
