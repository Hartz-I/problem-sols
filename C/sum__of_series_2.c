#include<stdio.h>
#include<math.h>

int main()
{
    int s,i;
    s=0;
    i=1;
    while(i<=3)
    {
        s+=pow(i,2);
        i+=1;
    }
    printf("%d",s);
}
