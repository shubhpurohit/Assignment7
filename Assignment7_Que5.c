//program to check whether two given numbers are co-prime numbers or not.

#include<stdio.h>
int main()
{
    int n1,n2,min,i,cp=0;
    printf("Enter two numbers to find if they are co-prime or not \n");
    scanf("%d%d",&n1,&n2);
    min=n1<n2?n1:n2;
    for(i=1;i<=min;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            cp=i;
        }
    }
    if(cp==1)
    {
        printf("Numbers are co-prime",cp);
    }
    else
    {
        printf("Numbers are not co-prime");
    }
    return 0;
}

