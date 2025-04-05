#include<stdio.h>
int main()
{
    int arr[10],sum_even=0,sum_odd=0,i;
    printf("enter the element of array:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            sum_even=sum_even+arr[i];
        else
            sum_odd=sum_odd+arr[i];
    }
    printf("sum of even=%d&sum of odd=%d",sum_even,sum_odd);
    return 0;
}
