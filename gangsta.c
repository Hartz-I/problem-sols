#include<stdio.h>

int main()
{
    int h, l,s;
    scanf("%d %d", &h,&l);
    h=h-1;
    l=l-1;
    s=h+l+1;
    printf("%d %d", s-h-1, s-l-1);
    return 0;
}
