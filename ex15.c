#include <stdio.h>
void main(){
	int i;
	int sum = 0;
	int score[3] = {85, 65, 90};
	score[3] = 100;
	for(i=0;i<4;i++){
		sum += score[i];
	}
	int arr_len = sizeof(score)/sizeof(score[0]) + 1; //C - �迭�� ���̸� ���ϴ� ���� 
	printf("�迭 score�� ���̴� %d�Դϴ�.\n", arr_len);
	printf("���� �� ���� �հ�� %d�̰�, ��� ������ %f�Դϴ�.\n", sum, (double)sum / arr_len);
}
