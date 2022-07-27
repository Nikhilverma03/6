//Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=i*i*i;
        sum=sum+a;
    }
    printf("Sum of cube of first %d natural number is %d",n,sum);
    return 0;
}
