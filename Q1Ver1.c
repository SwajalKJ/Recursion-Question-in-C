#include<stdio.h>
int print_arr();
int rev_print_arr();

int main()
{
int n=0;
int arr[], rev_arr[];


printf("Enter the length of array: ");
scanf("%d",&n);
printf("Enter value inside of array: ")
for(int i = 0; i < n; i++)
{
 scanf("%d", &arr);
}
print_arr(arr);
rev_print_arr(rev_arr);
return 0;
}

int print_arr(int arr[])
{
printf(arr);
return 0;
}
int rev_print_arr(int arr[], int rev_arr[])
{

printf(rev_arr);
return 0;
}
