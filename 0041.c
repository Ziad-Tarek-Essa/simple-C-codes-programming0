#include<stdio.h>
#include<stdlib.h>

  int main()
  {
int x,y,z;
printf("enter a value for x:");
scanf("%d",&x);
printf("enter a value for y:");
scanf("%d",&y);

z=x;
x=y;
y=z;
printf("x=%d\n",x);
printf("y=%d\n",y);
return 0;



  }
