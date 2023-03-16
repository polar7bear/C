#include <stdio.h>
void main(){
	int a, b;
	
	for(a=2;a<10;a++){
		for(b=1;b<10;b++){
			int c = a*b;
			printf("%d*%d=%d\t", a,b,c);
		}
		printf("\n");
	}
	int dan;
	scanf("%d", &dan);
	gugudan(dan); //함수의 호출
	//모든 함수는 정의가 되어 있어야 하며, 호출되면 전달값이 인식되어 처리된다. 
}
void gugudan(int su){ //함수의 정의 
	int a;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\t", su, a, su*a);
	}
}
