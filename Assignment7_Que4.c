//a program to calculate HCF of two numbers

#include<stdio.h>
int main()
{
    int n1,n2,min,i,HCF=0;
    printf("Enter two numbers to find their HCF \n");
    scanf("%d%d",&n1,&n2);
    min=n1<n2?n1:n2;
    for(i=1;i<=min;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            HCF=i;
        }
    }
    if(HCF!=0)
    {
        printf("HCF is %d ",HCF);
    }
    else
    {
        printf("No HCF found");
    }
    return 0;
}
