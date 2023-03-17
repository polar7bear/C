#include <stdio.h>
void main(){
	//변수의 유효 범위 (scope-스코프)
	int i = 5;
	int var = 10;
	printf("main() 함수 내의 전역 변수 var의 값은 %d 입니다.\n", var);
	if(i<10){
		local();
		int var = 30;
		printf("if문 내의 지역 변수 var의 값은 %d입니다.\n", var);
	} 
	printf("현재 지역 변수 var의 값은 %d입니다.\n", var);
}
void local(){
	int var = 20;
	printf("local() 함수 내의 지역 변수 var의 값은 %d입니다.\n", var);
}
