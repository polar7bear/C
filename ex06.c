#include <stdio.h>
void main(){
	//비트 연산자(&, |, ^, ~, >>, <<)
	int a = 20, b = 30;
	
	printf("a&b : %d\n", a&b);//20	
	printf("a|b : %d\n", a|b);//30
	printf("a^b : %d\n", a^b);//10
	printf("~a : %d\n", ~a);//-21
	printf("a>>2 : %d\n", a>>2);//5
	printf("a<<2 : %d\n", a<<2);//80
	
	//기타 연산자
	int rank = a>b ? 1 : 2;// 삼항연산자
	int c=50, d=60; //쉼표 연산자
	printf("a>b ? 1 : 2 -> %d\n", rank); //삼항 연산의 결과 -> 2 
}
