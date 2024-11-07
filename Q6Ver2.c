#include<stdio.h>
int fibonacci_fun(int n);
int main()
{
int i,n;
printf("enter the terms: ");
scanf("%d",&n);

for (i = 0; i < n; i++)
{
  printf("%d ", fibonacci_fun(i));
}
printf("\n");
return 0;
}
int fibonacci_fun(int n)
{
  if(n==0 || n == 1)
  {
  	return 1;
  }
  else
  {
  	return (fibonacci_fun(n-1) + fibonacci_fun(n-2));
  }
}
