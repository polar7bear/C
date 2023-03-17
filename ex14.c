#include <stdio.h>
void main(){
	//재귀 함수
	int a;
	printf("합계를 구할 숫자를 입력 : ");
	scanf("%d", &a);
	printf("결과 : %d", rSum(a)); 
}
int rSum(int n){
	if (n==1){		//n이 1이면 그냥 1을 반환함. 
		return 1;
	}
	return n + rSum(n-1);
	// n이 1이 아니면, n을 1부터 (n-1)까지의 합과 더한 값을 반환함. 
}
