#include<stdio.h>

int main()
{
	int a[10];
	int id,i,match_count,max_win;
	for(i=0;i<10;i++){
		a[i]=0;
	}
	
	for (match_count=1;match_count<=10;match_count++){
		scanf("%d",&id);
		a[id-1]+=1;
	}
	
	max_win=0;
	for(i=0;i<10;i++){
		if (max_win<=a[i]){
			max_win=i;
		}
	}
	
	printf("%d %d \n",max_win+1,a[max_win]);
	
	for(i=1;i<=10;i++){
		printf("%d\n",a[i-1]);
	}
	
}
