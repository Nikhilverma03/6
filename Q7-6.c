//Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int n,a,count=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(;n!=0;)
    {
        a=n%10;
        count=count+1;
        n=n/10;
    }
    printf("Number of digits is = %d",count);
    return 0;
}

