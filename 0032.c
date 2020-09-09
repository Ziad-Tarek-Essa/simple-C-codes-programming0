#include<stdio.h>
#include<stdlib.h>
int main()
{
 int x,y,z;
 float average;
printf("enter the three int.:\n");
 scanf("%d%d%d",&x,&y,&z);
 average=(x+y+z)/3.0;
 printf("the average=%f\n",average);
 printf("Deviation:\n");
 printf("%d\t%f\n",x,x-average);
 printf("%d\t%f\n",y,y-average);
 printf("%d\t%f\n",z,z-average);
 return 0;
}
