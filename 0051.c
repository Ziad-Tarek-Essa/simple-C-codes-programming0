#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int x,x1,x2,x3,x4,x5;
printf("enter 5 no. int:");
scanf("%d",&x);
x5=x%10;
x=x/10;
x4=x%10;
x=x/10;
x3=x%10;
x=x/10;
x2=x%10;
x=x/10;
x1=x%10;
if(x1==x5&&x2==x4)
    printf("the no. is palindrome ");
    else
            printf("the no. is not palindrome ");
    return 0;
}

