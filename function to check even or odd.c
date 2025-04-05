#include<stdio.h>
int function(int );
int main(){
    int n;
printf("enter a number");
scanf("%d",&n);
if (function(n)==1) printf("even");
    else if (function(n)==0) printf("odd");

    return 0;
}
int function(int x){
if(x%2==0) return 1;
else return 0;
}
