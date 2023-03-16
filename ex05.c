#include <stdio.h>
void main(){
	int a=30, b=35, c=32;
	//비교 연산자(==, !=, >, >=, <, <=)
	
	printf("a == b : %d\n", (a==b));
	printf("a != b : %d\n", (a!=b));
	printf("a >= b : %d\n", (a>=b));
	printf("a <= b : %d\n", (a<=b));	
	printf("a > b : %d\n", (a>b));	
	printf("a < b : %d\n", (a<b));
	
	printf("a>b && b<c : %d %d %d\n",a>b, b<c, (a>b && b<c));
	printf("a>b && b>c : %d %d %d\n",a>b, b>c, (a>b && b>c));
	printf("a<b && b<c : %d %d %d\n",a<b, b<c, (a<b && b<c));
	printf("a<b && b>c : %d %d %d\n",a<b, b>c, (a<b && b>c));
	
	printf("a>b || b<c : %d %d %d\n",a>b, b<c, (a>b || b<c));
	printf("a>b || b<c : %d %d %d\n",a>b, b<c, (a>b || b<c));
	printf("a>b || b<c : %d %d %d\n",a>b, b<c, (a>b || b<c));
	printf("a>b || b<c : %d %d %d\n",a>b, b<c, (a>b || b<c));
	
	printf("!(a>b) : %d\n", !(a>b));
	printf("!(a<b) : %d\n", !(a<b));
	printf("!(a>b || b>c) : %d\n", !(a>b || b>c));
	
}

