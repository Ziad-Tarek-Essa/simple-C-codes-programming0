#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
    float r;
    printf("enter the radias of the circle:\n");
    scanf("%f",&r);
    float diam=2*r;
    float circ=2*pi*r;
    float area=pi*pow(r,2);
    printf("the diam.=%f\n",diam);
    printf("the circumference of the circle=%f\n",circ);
    printf("the area of the circle=%f\n",area);
    return 0;
}
