/*
Write a program to cheack if a string is palindrome..
*/
#include <stdio.h>
int main()
{ 
    char string[15];
    int length=0, check=1,i;

    printf("Enter string:\n");
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            check=0;
            break;
        }

 }

    if(check==1)
    {
        printf("Yes it's a palindrome");
    }
    else
    {
        printf("No it's not a palindrome");
    }
    return 0;
}
/*
Difficulty Rating:80/100
*/
