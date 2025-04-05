#include<stdio.h>
int factorial(int n);
int main()
{
    int num,fact;
    scanf("%d",&num);
    fact=factorial(num);
    printf("factorial of %d is =%d",num,fact);
    return 0;
}
int factorial(int n)
{
    int sum=0;
    if(n==1)
        return 1;

    return    n*factorial(n-1);
}
