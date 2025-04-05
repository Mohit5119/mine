#include<stdio.h>>
int main()
{
    int arr[5],i,temp=0;
    printf("enter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];

        }
    }
    printf("second largest is %d",arr[i]);
    return 0;
}
