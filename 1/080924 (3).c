/*
Take an array,size and elements from user and print the sum of array elements
*/
#include <stdio.h>
int main()
{
	int Size, i, sum = 0;
	printf(" Enter the Array size = ");
	scanf("%d", &Size);
	int arr[Size];
	int *parr = arr;
	printf("Enter the Array Items = ");
	for (i = 0; i < Size; i++)
	{
	    scanf("%d", parr + i);
	}

	for (i = 0; i < Size; i++)
	{
		sum = sum + *(parr + i);
	}
	printf("The Sum of Array Items     = %d", sum);
       return 0;
}
/*
Difficulty Rating:75/100
*/