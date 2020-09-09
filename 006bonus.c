#include<stdio.h>
#include<stdlib.h>

void main(){

int x,days,hours,min,sec;
printf("enter the no. of sec.:");
scanf("%d",&x);
days=x/86400;
x=x%86400;
hours=x/3600;
x=x%3600;
min=x/60;
x=x%60;
sec=x;
printf("result=%d days,%d hours,%d min.,%d sec.",days,hours,min,sec);
}
