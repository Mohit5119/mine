#include<stdio.h>
float areaofcircle(int radius)
{
    float formula;
    formula=3.14*radius*radius;
    printf("%f",formula);
}
float  main()
{
    int r;
    printf("enter the radius of circle=");
    scanf("%d",&r);
    areaofcircle(r);

    return 0;
    getchar();
}
