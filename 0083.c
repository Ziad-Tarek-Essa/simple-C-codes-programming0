#include<stdio.h>
#include<stdlib.h>

void main(){
int x,pi=1;
printf("enter the no.");
scanf("%d",&x);
while(x>=1){
pi=pi*x;
x--;
}
printf("Factorial of an integer=%d",pi);
}
