#include<stdio.h>
int main()
{
    int a,b,result;
    char opt;
    printf("Enter the operation to be performed(+,-,*,/) :");
    scanf("%c", &opt);
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    if(opt=='+'){
        result=a+b;
        printf("%d + %d = %d",a,b,result);
    }
    else if(opt=='-'){
        result=a-b;
         printf("%d - %d = %d",a,b,result);
    }
    else if(opt=='*'){
        result=a*b;
         printf("%d * %d = %d",a,b,result);
    }
    else if(opt=='/'){
        result=a/b;
        printf("%d/%d = %d",a,b,result);
    }
    return 0;
}