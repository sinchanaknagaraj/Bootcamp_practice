#include<stdio.h>
int main()
{
    int i,j;
    int arr[]={2,2,4,5,3};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("duplicate array is ");
    for(i=0;i<length;i++){
    for(j=i+1;j<length;j++)
    {
        if(arr[i]==arr[j])
        printf("%d",arr[j]);
    }
    }
    return 0;
}
