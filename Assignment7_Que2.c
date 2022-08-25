//program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
    int n,fib,a=-1,b=1;
    printf("Enter the nth term ");
    scanf("%d",&n);
    printf("Fibbonacci series:- ");
    for(int i=1;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        printf(" %d ",fib);
    }

    return 0;


}

