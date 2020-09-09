#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void main(){
int x,y,z;
printf("enter the 3 sides of the triangle:\n");
scanf("%d%d%d",&x,&y,&z);

if(x*x==(y*y)+(z*z))
    printf("it is a right angle triangle");

else if(y*y==(x*x)+(z*z))
        printf("it is a right angle triangle");

else if (z*z==(x*x)+(y*y))
        printf("it is a right angle triangle");
    else
        printf("not a right angle triangle");
}
