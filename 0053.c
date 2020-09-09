#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
int x,y,z;
printf("enter the first int.:\n");
scanf("%d",&x);
printf("enter the sec. int.:\n");
scanf("%d",&y);
printf("enter the third int.:\n");
scanf("%d",&z);

if(x>y&&x>z)
    printf("the largest no=%d\n",x);
else if(y>x&&y>z)
    printf("the largest no=%d\n",y);
else
printf("the largest no=%d\n",z);

if(x<y&&x<z)
    printf("the smallest no=%d\n",x);
else if(y<x&&y<z)
    printf("the smallest no=%d\n",y);
else
printf("the smallest no=%d\n",z);
return 0;
}
