#include<stdio.h>
#include<stdlib.h>

void main(){
    char o;
    float a,b;
      printf("enter the first no.and click enter>");
    scanf("%f",&a);
    printf("\n****value = %f ****\n\n",a);
printf("enter an operation (+,-,*,/) or click (x) to exit>");
    while(o!='x'){
            scanf(" %c",&o);
    switch(o){
case'+':
   {
    printf("enter the second no.: ");
    scanf("%f",&b);
    a=a+b;
     printf("\n****value = %f ****\n\n",a);
     printf("enter an operation (+,-,*,/) or click (x) to exit>");}
     break;
case'-':
   {
    printf("enter the second no.: ");
    scanf("%f",&b);
     {a=a-b;
     printf("\n****value = %f ****\n\n",a);
     printf("enter an operation (+ ,-,*,/) or click <x> to exit>");}}
    break;
case'*':
    { printf("enter the second no.: ");
    scanf("%f",&b);
     a=a*b;
     printf("\n****value = %f ****\n\n",a);
     printf("enter an operation <+,-,*,/> or click <x> to exit>");}
    break;
case'/':
   { printf("enter the second no.: ");
    scanf("%f",&b);
    if(b!=0)
     {a=a/b;
     printf("\n****value = %f ****\n\n",a);
     printf("enter an operation <+,-,*,/> or click <x> to exit>");}
     else
        o='x';
     }
break;
case'x':
    exit(0);
    break;
default:
    printf("\n>>> illegal operation....try again>");

    }
 }
}
