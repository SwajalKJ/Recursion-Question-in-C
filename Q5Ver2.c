#include<stdio.h>
int gcd_fun(int a, int b);
int main()
{
int a,b;
printf("Enter value of a: ");
scanf("%d", &a);
printf("Enter value of b: ");
scanf("%d",&b);

printf("GCD of both num is: %d\n", gcd_fun(a,b));
return 0;
}

int gcd_fun(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	else
	{
		return (gcd_fun(b,a%b));
	}

}
