#include<stdio.h>

int main()
{
    int i,j,n,s,k;
    scanf("%d",&n);
    s=0;
    k=0;
    for(i=1;i<=n;i++)
    {
        for(j=k;j<=k+i;j++)
        {
            s+=j;
            printf("%d",j);
        }
        k=j+1;
    }
    printf("%d",s);
    return 0;
}
