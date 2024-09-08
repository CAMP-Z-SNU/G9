/*program to check if a string is a palindrome without using the header <string.h>*/
#include <stdio.h>
int main()
{ 
    char string[20];
    int len=0, temp=1,i;
    printf("Enter string:\n");
    gets(string);
    for(i=0;string[i]!='\0';i++)
    {
        len++;
    }

    for(i=0;i< len/2;i++)
    {
        if( string[i] != string[len-1-i] )
        {
            temp=0;
            break;
        }
 }
    if(temp==1)
    {
        printf("It's a palindrome");
    }
    else
    {
        printf("It's not a palindrome");
    }
    return 0;
}

//difficulty rating - 80/100