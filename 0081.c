#include<stdio.h>
#include<stdlib.h>

void main(){
int x,y,sum=0;
printf("enter x:");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
while(x<=y){
    if(x%2==0)
   {sum+=x;}
      x++;
}
printf("sum=%d",sum);
}
