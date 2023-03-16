#include <stdio.h>
void main(){
	int a = 50;
	int b = 60;
	int c = 70;
	
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a * b = %d\n", a*b);
	printf("a / b = %.3f\n", (float)a/b);
	printf("a %% b = %d\n", a%b);
	
	
	printf("전위 증가 ++a : %d\n", ++a);
	printf("후위 증가 b++ : %d\n", b++);
	printf("전위 감소 --c : %d\n", --c);
	printf("후위 감소 a-- : %d\n", a--);
	
	a = 50, b = 50;
	//대입연산자 (=, +=, -=, *=, /=, %=)
	a+=2; b-=2;
	printf("a+=2 -> a값에서 2를 더하여 대입한 결과 : %d\n", a) ;
	printf("b-=2 -> a값에서 2를 뺴기하여 대입한 결과 : %d\n", b) ;
	a*=2; b/=2;
	printf("a*=2 -> a값에서 2를 곱하여 대입한 결과 : %d\n", a) ;
	printf("b/=2 -> a값에서 2를 나누기하여 대입한 결과 : %d\n", b) ;
}

