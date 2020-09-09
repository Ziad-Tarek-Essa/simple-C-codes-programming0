#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void main(){
int s,n,r,a;
printf("enter N:\n");
scanf("%d",&n);
printf("enter A:\n");
scanf("%d",&a);
printf("enter R:\n");
scanf("%d",&r);
s=a*(pow(r,n)-1)/(r-1);
printf("the sum=%d",s);
}

