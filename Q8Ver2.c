#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int count_ones(int x);
int count_zeros(int x);
void main()
{
	int x, no_of_ones, no_of_zeros;
	printf("Enter an integer: ");
	scanf("%d",&x);
	
	no_of_ones = count_ones(x);
	no_of_zeros = count_zeros(x);
	
	printf("Number of 1's in %d are %d\n", x, no_of_ones);
	printf("Number of 0's in %d are %d\n", x, no_of_zeros);
}

int count_ones(int x)
{
	static int count = 0; 
	if(x != 0)
	{	
		if(x&1)
		{
			count++;
		}
		count_ones(x>>1);	
	}
	else
	{
		return count;
	}
}
int count_zeros(int x)
{
	static int count = 0; 
	if(x != 0)
	{	
		if(!(x&1))
		{
			count++;
		}
		count_zeros(x>>1);	
	}
	else
	{
		return count;
	}
}
