#include <stdio.h>

int main()
{
    int n,r,sum=0,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("the given number is amstrong");
    }
    else
    printf("the given number is not a amstrong");

    return 0;
}
