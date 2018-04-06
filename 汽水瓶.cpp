#include <stdio.h>
int main(){
	int n,s,k;
	
	while(scanf("%d",&n)){
	s=0;
	if(n==0) break;
	while(n>=3){
		k=n/3;
		s=s+k;
		n=k+n%3;
	}
	if(n==2){
		s++;
	} 
	
	
	printf("%d\n",s);
    
}
    return 0;
	
} 
