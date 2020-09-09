
#include<stdio.h>
#include<math.h>

void main(){
    int j=1,z,f=1,s=1;
    float x,sum=0,e,t=0,pt;
printf("enter the angle:");
    scanf("%f",&x);
    printf("enter the difference:");
    scanf("%d",&e);
      do{
        for(z=1;z<=j;z++){
            f*=z;}
            pt=t;
            t=pow(x,j)/f;
            sum+=s*t;
            s*=-1;
            j+=2; }
            while(fabs(t-pt)>=e);{
        printf("sin(%f)=%f\n",x,sum);}
    }
