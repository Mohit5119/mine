#include<stdio.h>
int greater(int arr[],int num)
{
    int temp=0,i;
    for(i=0;i<num;i++){
        if(temp<arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
int main()
{
    int n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int g=greater(arr[n],n);
    printf("%d is the greatest number",g);
}
