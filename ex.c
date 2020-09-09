#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#include <stdio.h>
#define N 20
int main() {
int lines, cols;
int s;
do {
printf("Enter the length of the side of the square (<= %3d): ", N);
scanf("%d", &s);
} while( s>N || s<1);
for (cols=1; cols<=s; cols++)
printf("*");
printf("\n");
for (lines=2; lines<=s-1; lines++) {
printf("*");
for (cols=2; cols<=s-1; cols++)
printf(" ");
printf("*");
printf("\n");
}
if (s>1) {
for (cols=1; cols<=s; cols++)
printf("*");
printf("\n");
}
return 0;}
