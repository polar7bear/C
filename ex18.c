#include <stdio.h> 
void main(){
	int i, arr_len;
	int num01 = 90, num02 = 70, num03 = 80;
	int* arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언
	arr_len = sizeof(arr)/sizeof(arr[0]);
	printf("주소\t\t저장값\n");
	for(i=0;i<arr_len;i++){
		printf("%#x\t%d\n", arr[i], *arr[i]);
	} 
	printf("\n");
}
