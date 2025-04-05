#include<stdio.h>
void reverse(int);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("binary decimal of %d is :",num);
   reverse(num);
    return 0;
}
void reverse(int n)
{
    int rev=0;
    if(n<=0)
        return ;
    rev=rev+(n%10);
    printf("%d",rev);
    reverse(n/10);
}

