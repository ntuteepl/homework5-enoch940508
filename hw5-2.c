#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    double m;
    scanf("%d",&t);
    if(t<=800)
    {
        m=t*0.9;
    }
    else if (800<=t&&t<=1500)
    {
        m=t*0.81;
    }
    else if (t<=1500)
    {
        m=t*0.9*0.79;
    }
     printf("%.1f",m);
}
