#include <stdio.h>
void main(){
	int a = 0b101101;
	int b = 074374;
	int c = 0xF3CB9;
	int d = 365;
	printf("2진수 0b101101 : %d\n", a); //Binary
	printf("8진수 074374 : %d\n", b); //Octal
	printf("16진수 0xF3CB9: %d\n", c); //Hex
	printf("10진수 365 : %d\n", d); //Decimal
	
	printf("10진수 365를 8진수로 변환 : %#o\n", d);
	printf("10진수 365를 16진수로 변환 : %x\n", d);
}
