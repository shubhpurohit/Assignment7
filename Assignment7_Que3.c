// a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>

int main()
{
    int n,i,fib,a=-1,b=1,flag=0;
    printf("Enter the number to check if it is in fibonacci ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
        if(n==fib)
        {
           flag=1;
            break;
        }
    }

    if(flag==1)
    {
         printf("The number is present in fibonacci series at term number %d",i-1);
    }
    else
    {
        printf("The number is not present in fibonacci series");
    }
    return 0;


}
