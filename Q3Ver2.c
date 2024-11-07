#include<stdio.h>
int rec_sum(int num);
int main()
{
int n;

printf("Enter number: ");
scanf("%d",&n);

printf("The sum of %d numbers is: %d", n, rec_sum(n));

return 0;
}

int rec_sum(int num)
{
	
	if(num == 0)
	{
	return 0;
	}

	else 
	{
	return num + rec_sum(num - 1);
	}

}
