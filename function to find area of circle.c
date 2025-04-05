#include<stdio.h>
float areaofcircle(float);
float main(){
float r;
printf("enter the ratio of circle");
scanf("%f",&r);
areaofcircle(r);
return 0;

}
float areaofcircle(float r){
float area=3.14*r*r;
printf("%f",area);
return area;
}
