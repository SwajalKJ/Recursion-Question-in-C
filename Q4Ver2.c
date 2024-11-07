#include<stdio.h>
long int factorial_fun(int n);
int main()
{
int n;
printf("Enter a num:");
scanf("%d",&n);
if (n<0)
{
	printf("negative num");
}
else
{
	printf("factorial of num is: %ld\n",factorial_fun(n));
}
return 0;
}
long int factorial_fun(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*factorial_fun(n-1));
	}
}
