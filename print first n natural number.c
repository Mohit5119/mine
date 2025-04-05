#include<stdio.h>
void natural(int n)
{
    if(n>0)
    {
        natural(n-1);
        printf("%d\n",n);
    }
}
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    printf("natural num till %d\n",num);
    natural(num);
}
