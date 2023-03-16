#include <stdio.h>
void main(){
	int a = 0;
	int sum = 0;
	while(a<100){
		a++;
		if(a % 3 == 0 || a % 5 == 0) sum+=a;		

	}printf("sum = %d\n",sum);
	
	int sw = 0;
	int b;
	//1~100ÀÇ ¼Ú¼ö Ãâ·Â
	for(b=2;b<=100;b++){
		int c;
		for(c=2;c<b;c++){
			
			if(b % c == 0){
				sw=1;
				break;	
			}
		}
			if(sw==0){
			printf("%d\n", b);
		}	sw = 0;
	}	
	
} 
	

