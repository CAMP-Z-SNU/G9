#include<stdio.h>
int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements : ");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    int i,j,temp;
    for (i = 0; i < size-1 ; i++)
    {
        for (j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    } 
    printf("descending order sort...\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}