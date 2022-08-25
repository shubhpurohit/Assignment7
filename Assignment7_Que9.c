//a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
int main()
{
    int temp,n,sum=0,r;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(sum==temp)
        printf("The number is armstrong number\n ");
    else
        printf("Not armstrong");

    return 0;

}
