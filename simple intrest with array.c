#include<stdio.h>
float simpleintrest(float,float,float);
int main()
{
    float p,i,t,A=0;
    printf("enter principal amount ,interest rate and time");
    scanf("%f%f%f",&p,&i,&t);
    printf("simple interest is=%f",simpleintrest(p,i,t));

    return 0;
}
float simpleintrest(float p,float i,float t)
{
    return (p*i*t)/100;
}
