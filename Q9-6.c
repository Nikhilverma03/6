//Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int m,n,gcd,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    for(int i=1;(i<=m&&i<=n);i++)
    {
        if(m%i==0&&n%i==0)
            gcd=i;
    }
    lcm=(m*n)/gcd;
    printf("LCM of %d and %d is = %d",m,n,lcm);
    return 0;
}
