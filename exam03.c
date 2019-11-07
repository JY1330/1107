#include <stdio.h>

int fact(int a)
{
	int i, fact = 1;
	for(i=1;i<=a;i++)
		fact *= i;
		
	return fact;
}

int main()
{
	int num;
	
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	
	printf("%d!의 합은 %d 입니다.\n",num,fact(num));
	return 0;
}
