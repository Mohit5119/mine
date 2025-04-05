#include<stdio.h>
void square(int);
int main()
{
    int num;
    printf("enter the term :");
    scanf("%d",&num);
    printf("square of natural numbers are:");
    square(num);
    return 0;
}
void square(int n)
{
    if(n<=0)
        return;
    square(n-1);
    n=n*n;
    printf("%d ",n);

}
