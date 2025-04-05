#include<stdio.h>
float main()
{
    float unit=50,amount=0,total;
    switch(unit<=50)
    {
       case 1: amount=amount+(unit)*0.50;break;
       case 0:  switch(unit<=150)
       {
           case 1:amount=50*0.50+(unit-50)*0.75;break;
           case 0:switch(unit>=150)
           {
               case 1:amount=50*0.50+100*0.75+(unit-150);break;

           }
       }
    }
    total=amount+amount*20;
    printf("tota amount=%f",total);
}
