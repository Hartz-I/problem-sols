#include<stdio.h>
#include<math.h>

int main()
{
    int n,r;
    scanf("%d", &n);
    if (n<10)
    {
        printf("%d",n);
    }
    else if (n>=10)
    {
        r=n%10 + 1;
        printf("%d", r*10+r);
    }
    return 0;
}
