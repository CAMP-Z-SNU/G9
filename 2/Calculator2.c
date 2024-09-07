#include<stdio.h>
int main()
{

int a,b,option,y=1;
while(y==1)
{
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Enter your choice \n");
    scanf("%d",& option );
    if(option==1){
        printf("%d+%d=%d",a,b,a+b);
    }
    else if(option==2){
        printf("%d-%d=%d",a,b,a-b);
    }
    else if(option==3){
        printf("%d*%d=%d",a,b,a*b);
    }
    else if(option==4){
        printf("%d/%d=%d",a,b,a/b);
    }

        printf("\nPlease enter 1 to continue, 0 to terminate:\n");
        scanf("%d",&y);
}        
return 0;
}