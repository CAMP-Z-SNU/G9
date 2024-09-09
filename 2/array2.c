/*
program to take an array, size and elements from the user and print the smallest and the largest element
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int s=arr[0], l=arr[0],i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] < s)
        {
            s = arr[i];
        }
        if (arr[i] > l)
        {
            l = arr[i];
        }
    }
    printf("The smallest element of the array = %d\n", s);
    printf("The greatest element of the array = %d\n", l);

    return 0;
}

//difficulty rating - 50/100