 #include<stdio.h>
 void odd(int);
 int main()
 {
     int num;
     printf("enter the terms :");
     scanf("%d",&num);
     printf("odd numbers are=");
    odd(num);
     return 0;
 }
void odd(int n)
{
    if(n<=0)
        return;
        odd(n-1);
    if(n%2!=0)
    {
        printf("%d ",n);

    }


}
