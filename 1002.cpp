#include "stdio.h"
int main(){
	int s=0,a[6],i=0;//�˴�����Ϊa[6],����Ϊs��λ�������ᳬ��6 
	char n;//��������Ϊint�ͣ����ֺܴ�ʱ������� 
	while((n=getchar())!='\n'){//���ַ�û�����꣬û�е������ַ� 
		s=s+n-'0';//����s 
	}
	while(s>0){
		a[i]=s%10;//s��λ���ֱ�洢 
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
			printf(" ");//λ��֮���пո����һλû�� 
		}
		i--;//ʵ��iѭ�� 
	}
	
	
	return 0;
} 
