#include <stdio.h>
void main(){
	int a = 0b101101;
	int b = 074374;
	int c = 0xF3CB9;
	int d = 365;
	printf("2���� 0b101101 : %d\n", a); //Binary
	printf("8���� 074374 : %d\n", b); //Octal
	printf("16���� 0xF3CB9: %d\n", c); //Hex
	printf("10���� 365 : %d\n", d); //Decimal
	
	printf("10���� 365�� 8������ ��ȯ : %#o\n", d);
	printf("10���� 365�� 16������ ��ȯ : %x\n", d);
}
