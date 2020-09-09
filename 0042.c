#include<stdio.h>
#include<stdlib.h>
#include <math.h>
  int main()
  {
int x,x1,x2,x3,x4,x5;
printf("enter 5 no. int:");
scanf("%d",&x);
x5=x%10;
x=x/10;
x4=x%10;
x=x/10;
x3=x%10;
x=x/10;
x2=x%10;
x=x/10;
x1=x%10;
printf("%d  %d  %d  %d  %d",x1,x2,x3,x4,x5);


return 0;}
