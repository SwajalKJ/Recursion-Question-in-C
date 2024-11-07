#include<stdio.h>

int main()
{
	int a=0,b=1,c=0,n;
	printf("enter number of terms:");
	scanf("%d",&n);
	printf("%d " "%d ",a,b);
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	printf("\n");
	return 0;
}

