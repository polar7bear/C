#include <stdio.h>
void main(){
	float a = 3.14159272;
	double b = 274.123478657649;
	long double c = a + b;
	char d = 'a';
	unsigned char e = 'b';
	printf("a=%.20f\n", a);
	printf("b=%.20f\n", b);
	printf("c=%lf\n", c);
	printf("d=%c\n", d);
	printf("e=%c\n", e);
}
