#include<stdio.h>
void binary_decimal(int);
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
printf("binary decimal of %d is :",num);
binary_decimal(num);
return 0;
}
void binary_decimal(int n)
{
if(n<=0)
return ;
binary_decimal(n/2);
n=n%2;
printf("%d",n);
}
