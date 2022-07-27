//Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(;n!=0;)
    {
        a=n%10;
        n=n/10;
        rev=(rev*10)+a;
    }
    printf("New reversed number is %d",rev);
    return 0;
}
