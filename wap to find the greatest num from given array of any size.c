#include<stdio.h>
int greatest(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1])
        {
            arr[i]=arr[i+1];
        }
        return arr[i];
    }
}
int main(){
    int num;
    printf("enter size of an array:");
    scanf("%d",&num);
    int a[num];
    printf("%d is greatest",greatest(a[num],num);
}