#include "stdio.h"
int main(){
	int i=0;
	int n;
	scanf("%d",&n);
	while(n!=1){// n>1���ԣ� 
		if(n%2==0){
			n/=2;	
		}
		else{
			n=(3*n+1)/2;
		}
		i++;	//i++������󣬶����Ƿ���if��else���� 
	}
	printf("%d",i);	
	return 0;   //�ǵ�Ҫreturnѽ�� 
} 
