#include<stdio.h>
int main()
{
    int arr[10],i,temp=0;
    printf("enter the element:");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
   //temp=arr[0];
    for(i=0;i<9;i++)
    {
        for(int j=0;j<9;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
   }
for(i=0;i<=9;i++)
    printf("%d ",arr[i]);
return 0;
}
