#include <stdio.h>

int main()
{
    int a[10],n,i,j,swap;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("the elements are\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    {
        swap=a[j];
        a[j]=a[j+1];
        a[j+1]=swap;
    }
    
    printf("the ascending order is\n");
    for(i=0;i<n;i++)
       printf("%d  ",a[i]);
    return 0;
}
