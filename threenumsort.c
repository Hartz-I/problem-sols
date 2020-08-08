#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b , &c);

    if (a>=b && b>=c)
    {
        printf("The greatest number is %d",a);
    }
    else if (a>=c && c>=b)
    {
        printf("The greatest number is %d",a);
    }
    else if (b>=c && c>=a)
    {
        printf("The greatest number is %d",b);
    }
    else if (b>=a && a>=c)
    {
        printf("The greatest number is %d",b);
    }
    else if (c>=a && a>=b)
    {
        printf("The greatest number is %d",c);
    }
    else if (c>=b && b>=a)
    {
        printf("The greatest number is %d",c);
    }
    return 0;
}
