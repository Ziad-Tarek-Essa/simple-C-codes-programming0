#include<stdio.h>
#include<stdlib.h>

void main(){
    int x,i,min;
    for(i=1;i<=10;i++){
    printf("enter int.:");
    scanf("%d",&x);
    if(x<min)
    min=x;
    }
    printf("min.=%d",min);
}
