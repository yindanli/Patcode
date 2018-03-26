#include "stdio.h"
int main(){
	int s=0,a[6],i=0;//此处设置为a[6],是作为s的位数，不会超过6 
	char n;//不能设置为int型，数字很大时产生溢出 
	while((n=getchar())!='\n'){//当字符没有输完，没有到换行字符 
		s=s+n-'0';//计算s 
	}
	while(s>0){
		a[i]=s%10;//s的位数分别存储 
		s/=10;
		i++;
	}
	i--;
	while(i>=0){
		switch(a[i]){
			case 0 : printf("ling"); break;
            case 1 : printf("yi"); break;
            case 2 : printf("er"); break;
            case 3 : printf("san");break;
            case 4 : printf("si");break;
            case 5 : printf("wu");break;
            case 6 : printf("liu");break;
            case 7 : printf("qi");break;
            case 8 : printf("ba");break;
            case 9 : printf("jiu");break;
		}
		if(i!=0){
			printf(" ");//位数之间有空格，最后一位没有 
		}
		i--;//实现i循环 
	}
	
	
	return 0;
} 
