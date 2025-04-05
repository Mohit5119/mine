 #include<stdio.h>
 void reversenatural(int);
 int main()
 {
     int num;
     printf("enter the terms :");
     scanf("%d",&num);
     reversenatural(num);
     return 0;
 }
void reversenatural(int n)
{
    if(n<=0)
        return;
    printf("%d ",n);
    reversenatural(n-1);
}
