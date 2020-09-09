#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void main(){
int pn,quantity;
printf("Enter the product no.:");
scanf("%d",&pn);
printf("Enter quantity:");
scanf("%d",&quantity);
switch(pn){
    case 1:
     printf("retail price=%f$",quantity*2.98);
     break;
    case 2:
     printf("retail price=%f$",quantity*4.50);
    break;
    case 3:
     printf("retail price=%f$",quantity*9.98);
    break;
    case 4:
     printf("retail price=%f$",quantity*4.49);
    break;
    case 5:
     printf("retail price=%f$",quantity*6.87);
    break;
}}
