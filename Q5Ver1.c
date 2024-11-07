#include<stdio.h>
int main()
{
  int n1, n2, gcd;
  printf("Enter 2 number:");
  scanf("%d",&n1);
  scanf("%d",&n2);
  if(n1>n2)
	{
	  gcd=n2;
	}
  else
	{
	  gcd=n1;
	}
  while(n1 % gcd != 0 || n2 % gcd !=0)
	{
	  gcd--;
	}
  printf("GCD=%d\n", gcd);
return 0;
}
