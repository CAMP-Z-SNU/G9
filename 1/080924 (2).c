/*
Write a program to check whether an integer is palindrome
*/
#include <stdio.h>
int main()
{
    int  n, result=0, q, rem;
    printf("please enter the number");
    scanf("%d", &n);
    q = n;
    while(q!=0)
    {
        rem =q%10;
    result = result*10 + rem;
    q = q/10;
    }
    if(result == n)
    printf("yes it is a palindrome");
    else
    printf("No it is not a palindrome");
    return 0;
}
/*
Difficulty Rating:50/100
*/