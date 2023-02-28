#include<stdio.h>

int n,r, temp,rev=0;

void main()
{
    printf("Enter a number");
    scanf("%d",&n);
    temp = n;
    do{
        r = n%10;
        rev = rev * 10 + r;
        n = n/10;
    }while(n!=0);

    if(temp==rev)
        printf("%d is a palindrome number",temp);
    else
        printf("%d is not a palindrome number",temp);
}