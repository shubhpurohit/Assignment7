//a program to find the Nth term of the Fibonnaci series
#include<stdio.h>

int main()
{
    int n,fib,a=-1,b=1;
    printf("Enter the nth term ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("the %dth term is:-%d",n,fib);
    return 0;


}
