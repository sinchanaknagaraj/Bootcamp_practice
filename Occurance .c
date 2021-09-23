#include <stdio.h>

int main()
{
    int n,num,a[10],i,count=0;
    printf("Enter the elements");
    scanf("%d",&n);
    printf("Enter the numbers ");
    for(i=0;i<n;i++){
          scanf("%d",&a[i]);
    }
    printf("Find the occurance of element");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num){
              count++;
        }
    }
    printf("occurance of %d is %d",num,count);
    return 0;
}
