#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i>0;i++){
        if (n/pow(10,i)<1){
            break;
        }
    }

    printf("%d",i);
    return 0;
}
