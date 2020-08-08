#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("%d is an even number",n);
    }
    else
    {
        printf("%d is an odd number",n);
    }
    return 0;
}
