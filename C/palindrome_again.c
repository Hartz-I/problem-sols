#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int i,j,n,p,half,n_last,n_first,n_mid,rev_n,n_fake,counter;
    n=1;
    counter=0;
    rev_n=0;
    
    while(true){
	    for(i=1;i>0;i++){
	        if (n/pow(10,i)<1){
	            break;
	        }
	    }
	
	    if (i%2==0){
	        half=i/2;
	        p=pow(10,half);
	        n_last=n%p;
	        n_first=(n-n_last)/pow(10,half);
	
	    } else {
	        half=i/2;
	        p=pow(10,half+1);
	        n_last=n%p;
	        n_mid=n%(p+1);
	        n_first=(n-n_mid)/pow(10,half+1);
	    }
	    
	    n_fake=n_last;
	    for(j=1;j<=half;j++){
	        rev_n=(rev_n+(n_fake%10))*10;
	        n_fake=(n_fake-n_fake%10)/10;
	    }
	
	    if (n_first==rev_n/10 && n%10!=0){
	        counter++;
	        
	    }
	    
	    if (counter==100000){
	    	break;
		}
	    
	    n++;
	    rev_n=0;
	}	
	printf("%d %d %d %d \n",n,n_last,rev_n/10,counter);

    return 0;
}
