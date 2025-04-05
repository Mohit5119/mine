#include<stdio.h>
int main()
{
    int arr[10],sum=0,i;
    printf("enter element");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<10;i++)
        sum=sum+arr[i];
    printf("sum is=%d",sum);

}
