#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, m;
    double w;
    scanf("%d%d",&t,&m);
    if(t<=60)
    {
        w=t*m;

    }
    else if (61<=t&&t<=120)
    {

        w=60*m+(t-60)*m*1.33;

    }
    else if (t>121)
    {

        w=60*m+60*m*1.33+(t-120)*m*1.66;

    }

    printf("%.1f",w);
}
