// program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int j,n1;
    printf("Enter a number ");
    scanf("%d",&n1);
    n1++;
    while(n1)
    {
        for(j=2;j<=n1;j++)
        {
            if(n1%j==0)
            {
                break;
            }

        }
    if(n1==j)
        {
             break;
        }
         n1++;

    }
    printf("%d",n1);
    return 0;
}
