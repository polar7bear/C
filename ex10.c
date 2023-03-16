#include <stdio.h>
void main(){
	//반복실행문을 활용하여 두 수를 입력받아 최소 공배수를 계산해 출력
	int n1, n2, i,gcd, lcm;
	scanf("%d %d", &n1, &n2);
	
	i=1;
	lcm=1;
	
	for(i=1;i<=n1 && i<=n2;i++){
		if(n1 % i == 0 && n2 % i == 0){
			gcd=i;
		}
	}
	lcm = n1*n2/gcd;
	printf("최대 공약수 : %d\n", gcd);
	printf("최소 공배수 : %d\n", lcm);
}
	

