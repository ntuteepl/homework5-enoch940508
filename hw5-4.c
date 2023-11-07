#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float A,B,C;
    scanf("%d %d",&a,&b);
    A=30*a+0.5*b;
    B=6*b;
    if(A>B){C=A-B;}
    else if(A<B){C=B-A;}
    else{C=0;}
    if(C>180){C=360-C;}
    printf("%.3f",C);
}
