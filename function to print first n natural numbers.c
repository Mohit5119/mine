#include<stdio.h>
void function(int);
int main(){
int x;
function(x);
return 0;
}
void function(int n){
    printf("enter nth number");
    scanf("%d",&n);
    int c=1;
for(int i=1;i<=n;i++){

    printf("%d",c);
    c=c+2;
}
}
