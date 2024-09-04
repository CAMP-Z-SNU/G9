#include <stdio.h>
int main()
{
    char c;
    int a,b;
    printf("+,-,*,/");
    scanf("%c ", &c);
    printf("enter two integers");
    scanf("%d %d", &a, &b);
    if(c=='+'){
    printf(" %d +%d = %d" , a, b, (a+b));
    }
    else if(c=='-'){
    printf("  %d - %d = %d" , a, b,(a-b));
    }
    else if(c=='*'){
    printf(" %d * %d = %d", a, b, (a*b));
    }
    else if(c=='/'){
    printf("  %d / %d =%d", a, b,(a/b));
    }
    return 0;
}