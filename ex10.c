#include <stdio.h>
void main(){
	//�ݺ����๮�� Ȱ���Ͽ� �� ���� �Է¹޾� �ּ� ������� ����� ���
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
	printf("�ִ� ����� : %d\n", gcd);
	printf("�ּ� ����� : %d\n", lcm);
}
	

