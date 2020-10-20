#include<stdio.h>

int main()
{
    double x;
    x=1;
    while(x*2<1000)
    {
        x*=2;
    }
    printf("%lf",x);
    return 0;
}
