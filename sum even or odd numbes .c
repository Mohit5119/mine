#include<stdio.h>
int main()
{
    int a[10]={1,3,7,9,33,22,4,1,7,8},i,esum=0,osum=0;
    printf("enter the 10 element of array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            esum=esum+a[i];
        else
            osum=osum+a[i];
    }
    printf("sum of even=%d\n",esum);
    printf("sum of odd=%d",osum);
    return 0;
}
