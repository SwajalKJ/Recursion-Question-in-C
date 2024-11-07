#include<stdio.h>

int find_sum(int n);
int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The sum of %d numbers is: %d", n, find_sum(n));
};

int find_sum(int n)
{
	int total = 0;
	for (int i = 1; i<=n; i++)
	{
		total += i;
	}
	return total;
}
