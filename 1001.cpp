#include "stdio.h"
int main(){
	int i=0;
	int n;
	scanf("%d",&n);
	while(n!=1){// n>1不对？ 
		if(n%2==0){
			n/=2;	
		}
		else{
			n=(3*n+1)/2;
		}
		i++;	//i++放在最后，而不是放在if或else里面 
	}
	printf("%d",i);	
	return 0;   //记得要return呀！ 
} 
