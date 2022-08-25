// program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j;
    printf("The prime number 1-100 are:- ");
    for(i=1;i<=100;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
    if(i==j)
        {
             printf(" %d ",i);
        }

    }

    return 0;
}
