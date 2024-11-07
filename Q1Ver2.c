#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void rev_prn_arr(int *ptr, int count);
void main()
{

//	this is using malloc with pre defined array size
	int *int_p, *tmp_p, i, n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int_p = (int *)malloc(n*sizeof(int));
	if(int_p == NULL)
	{
		printf("ERROR");
		exit(-1);
	}
	tmp_p = int_p;
	for(int i = 0; i < n; i++)
	{
		printf("Enter the array element %d: ", i);
		scanf("%d",(int_p));
		int_p++;
	}
	rev_prn_arr(tmp_p, n);
	free(int_p);
	free(tmp_p);


// 	this is for user defined size array using normal method
//	int arr[MAX],n;
//	printf("Enter size of array: ");
//	scanf("%d",&n);
//	
//	for(int i = 0; i < n; i++)
//	{
//		printf("Enter the array element %d: ", i);
//		scanf("%d",&arr[i]);
//	}
//	
//	rev_prn_arr(&arr[0], n);
		
//	this is for pre defined size array
//	int arr[MAX];	
//	for(int i = 0; i < MAX; i++)
//	{
//
//		scanf("%d",&arr[i])
//		arr[i] = i+1;
//	}
// 	rev_prn_arr(&arr[0], MAX);
	
}

void rev_prn_arr(int *ptr, int count)
{
	if(count > 0)
	{
		rev_prn_arr((ptr + 1), (count-1));	
		printf("%d ", *ptr);
	}
	else
	{
		return;
	}
}
