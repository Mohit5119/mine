#include<stdio.h>
int fibbonacci(int num)
{
    if(num==0||num==1){
        return num;
    }
    return fibbonacci(num-1)+fibbonacci(num-2);
}
int main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    printf("fibbonacci series of %d term is :\n",n);
    for(i=0;i<n;i++)
        printf("%d\n",fibbonacci(i));
    return 0;
}
