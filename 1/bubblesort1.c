/*
write a program to print the elements of the array in ascending order
 */
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int i,j,x;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    printf("Array after sorting in ascending order :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

/*
Difficulty Rating - 80/100
*/