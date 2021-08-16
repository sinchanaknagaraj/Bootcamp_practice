#include <stdio.h>

int main()
{
    int n,rem=0,rev,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rev=n%10;
        rem=(rem*10)+rev;
        n=n/10;
    }
    if(temp==rem)
    {
        printf("the given number is palendrome");
    }
    else
    printf("the given number is not a palendrome");

    return 0;
}
