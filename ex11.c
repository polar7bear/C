#include <stdio.h>
void main(){
	int a, b;
	
	for(a=2;a<10;a++){
		for(b=1;b<10;b++){
			int c = a*b;
			printf("%d*%d=%d\t", a,b,c);
		}
		printf("\n");
	}
	int dan;
	scanf("%d", &dan);
	gugudan(dan); //�Լ��� ȣ��
	//��� �Լ��� ���ǰ� �Ǿ� �־�� �ϸ�, ȣ��Ǹ� ���ް��� �νĵǾ� ó���ȴ�. 
}
void gugudan(int su){ //�Լ��� ���� 
	int a;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\t", su, a, su*a);
	}
}
