
#include <stdio.h>

int main()
{
    int a,b,option,y=1;
while(y==1)
{
    printf("Enter two integers a,b");
    scanf("%d %d", &a,&b);
    printf("Enter 1 for sum, 2 for difference,3 for product,4 for ratio");
    printf("Enter your choice \n");
    scanf("%d",& option );
    switch(option)
    {

    case 1:
    printf("sum of %d and %d is %d", a, b,a+b);
    break;
    case 2:
    printf("difference of %d and %d is %d", a, b, a-b);
    break;
    case 3:
    printf("product of %d and %d is %d", a, b, a*b);
    break;
    case 4:
    printf("ratio of %d and %d is %d", a, b, a/b);
    }
        printf("Please enter 1 to continue, 0 to terminate:\n");
        scanf("%d",&y);
}        
return 0;

    
}