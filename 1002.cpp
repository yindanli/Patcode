#include "stdio.h"
int main(){
	int s=0,n;
	scanf("%d",&n);
	while(n>0){
		s+=n%10;
		n/=10;
	}
	printf("%d",s);
	return 0;
} 
