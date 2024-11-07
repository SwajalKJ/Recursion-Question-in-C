#include <stdio.h>
void convert(int a, int base);

void main() 
{    
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    convert(a,2);
    printf("\n");
    convert(a,8);
    printf("\n");
    convert(a,16);
    printf("\n");
}

void convert(int a, int base)
{
	int reminder = a % base;
	if(a == 0)
	{
		return;
	}
	convert(a/base,base);
	
	if(reminder < 10)
	{
		printf("%d", reminder);
	}
	else
	{
		printf("%c", reminder-10+'A');
	}
}

