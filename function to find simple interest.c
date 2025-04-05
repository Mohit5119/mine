#include<stdio.h>
double simpleinterest(int,int,int);
double main(){
int a,p,r,t,i=1;
while( i<5){
printf("enter the principal amount");
scanf("%d",&p);
printf("enter the interest rate");
scanf("%d",&r);
printf("enter the time per year");
scanf("%d years",&t);
        a=simpleinterest(p,r,t);
printf("%d",a);
 i++;
 }
return 0;
}
double simpleinterest(int m,int r,int t){
int f= m*(1+r*t);
return f;
}
