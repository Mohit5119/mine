#include<stdio.h>
void octal(int);
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("octal  of %d is :",num);
   octal(num);
    return 0;
}
void octal(int n)
{
    if(n<=0)
        return ;
    octal(n/8);
    n=n%8;
    printf("%d",n);
}

