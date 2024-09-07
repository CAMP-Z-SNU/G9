/*
Write a programme to check whether a number is prime number.
*/
#include <stdio.h>

int main()
{ int a, i, ans =0;
printf("Enter any one positive integer , a");
scanf("%d", &a);
if(a=='0'|| a=='1')
ans=1;
for (i=2;i<=a/2; ++i) {
    if(a%i == 0) {
    ans=1;
    break;
     }
}
if (ans==0)
printf("%d is a prime number",a);
else
printf("%d is not a prime number",a);
return 0;
}
/*
Difficulty Rating:75/100
*/