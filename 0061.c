#include<stdio.h>
#include<stdlib.h>
#include <math.h>

void main(){
int score ;
printf("enter your score:");
scanf("%d",&score);
printf("\n");

if(score>=90)
 printf("grade=A\n");

else if (score>=80)
 printf("grade=B\n");

else if (score>=70)
 printf("grade=C\n");

else if(score>=60)
 printf("grade=D\n");

else
 printf("grade=F\n");


}
