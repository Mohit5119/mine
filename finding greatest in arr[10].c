#include<stdio.h>
int main()
{
    int arr[10],temp=0,i;
    printf("enter element :");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //temp=arr[0];
    for(i=0;i<10;i++)
    {
        if(temp<arr[i])
            temp=arr[i];
    }
    printf("greatest number is %d",temp);
    return 0;
}
