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
	
	
	printf("���� ���� ++a : %d\n", ++a);
	printf("���� ���� b++ : %d\n", b++);
	printf("���� ���� --c : %d\n", --c);
	printf("���� ���� a-- : %d\n", a--);
	
	a = 50, b = 50;
	//���Կ����� (=, +=, -=, *=, /=, %=)
	a+=2; b-=2;
	printf("a+=2 -> a������ 2�� ���Ͽ� ������ ��� : %d\n", a) ;
	printf("b-=2 -> a������ 2�� �����Ͽ� ������ ��� : %d\n", b) ;
	a*=2; b/=2;
	printf("a*=2 -> a������ 2�� ���Ͽ� ������ ��� : %d\n", a) ;
	printf("b/=2 -> a������ 2�� �������Ͽ� ������ ��� : %d\n", b) ;
}

