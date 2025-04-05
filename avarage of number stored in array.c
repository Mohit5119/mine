#include<stdio.h>
int main()
{
    int arr[10],i;
    float average,sum=0;
    printf("enter the elements:");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    average=sum/10;
    printf("sum=%f average=%.2f",sum,average);
    return 0;

}
