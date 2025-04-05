#include<stdio.h>
int sumofnatural(int n);
int main(){
    int num;
    scanf("%d",&num);
    int S=sumofnatural(num);
    printf("sum=%d",S);
return 0;
}
int sumofnatural(int n)
{
    int sum=0;
    if(n==1){
        return 1;
    }
    sum=n+sumofnatural(n-1);
    return sum;

}
