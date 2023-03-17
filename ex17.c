#include <stdio.h>
void main(){
	
	//포인터 - 데이터가 있는 주소를 포인터라고함. &주소연산자, *참조 연산자 
	
	int n = 100; //변수선언 
	int v = &n; // &는 주소 연산자이므로 주소를 전달함 
	int *ptr = &n; //포인터의 선언 - ptr은 주소를 저장, *ptr은 해당 주소에 있는 데이터를 저장 
	int *pptr = &ptr;
	printf("n의 값 : %d\n", n);
	printf("v는 &n을 대입하였으므로 주소 : %#x\n", v);
	printf("ptr은 &n을 대입하였으므로 주소 : %#x\n", ptr);
	printf("*ptr은 ptr 주소에 있는 데이터 값 : %d\n", *ptr);
	printf("pptr은 pptr의 주소 : %#x\n", pptr);
	printf("*pptr은 ptr의 주소 : %#x\n", *pptr);
	printf("\n");
	
	//포인터의 계산
	char* ptr_char = 0;
	int* ptr_int = NULL;
	double* ptr_double = 0x00;
	printf("포인터 ptr_char가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_char); 
	printf("포인터 ptr_int가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_int);
	printf("포인터 ptr_double가 현재 가리키고 있는 주소값은 %#x입니다.\n", ptr_double);
	printf("포인터 ptr_char가1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_char);
	printf("포인터 ptr_int가 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_int);
	printf("포인터 ptr_double이 1 증가 후에 가리키고 있는 주소값은 %#x입니다.\n", ++ptr_double);
	
} 
