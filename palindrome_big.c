#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int i,j,counter,n,n_fake,rev_n,n_in;
    scanf("%d",&n_in);
    counter=0;
    n=1;
    rev_n=0;
    while (true){

        for(i=1;i>0;i++){
            if (n/pow(10,i)<1){
                break;
            }
        }

        n_fake=n;
        for(j=1;j<=i;j++){
            rev_n=(rev_n+(n_fake%10))*10;
            n_fake=(n_fake-n_fake%10)/10;
        }

        if (n==rev_n/10){
            counter+=1;
        }


        if (counter==n_in){
            break;
        }

        n+=1;
        rev_n=0;


    }

    printf("%d %d %d %d \n",i,n,rev_n/10,counter);

    return 0;
}
