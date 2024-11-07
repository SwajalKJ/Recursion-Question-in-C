#include<stdio.h>


int countDigits(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return 1 + countDigits(num/10);
	}
}


int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if (num == 0)
	{
		printf("Number of digits: 1\n");
	}
	else
	{
		printf("Number of digits: %d\n", countDigits(num));
	}

	return 0;
}
