#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
float quantity,unit_price;
float net_price;
int discount_type;

printf("enter the quantity:");
scanf("%f",&quantity);

printf("ENTER the unit price:");
scanf("%f",&unit_price);

printf("ENTER the discount type:");
scanf("%d",&discount_type);

if(discount_type==1)
    {net_price=quantity*unit_price*0.9;}

    else if(discount_type==2)
    {net_price=quantity*unit_price*0.85;}

    else
   {net_price=quantity*unit_price*0.95;}

     printf("the quantity=%f\n",quantity);
     printf("the unit price=%f\n",unit_price);
     printf("the discount type=%d\n",discount_type);
     printf("the net price=%f\n",net_price);
    return 0;
}
