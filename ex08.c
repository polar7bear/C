#include <stdio.h>
void main(){
	int edps=95, db=90, pg=95, tot = 0;
	
	char pass = 'T';
	float avg = 0.0f;
	tot = (edps+db+pg);
	avg = (float) tot/3;
	
	printf("���� : %d\n", tot);
	printf("��� : %.2f\n", avg);
	
	//���� ����� 60�̻��̸� pass�� T�̰� �ƴϸ� F 
	if(avg<60) {
		pass = 'F';
		printf("�հݿ��� : ���հ��Դϴ�.\n");
	}else{
		pass = 'T'; 
		printf("�հݿ��� : �հ��Դϴ�.\n");
	}
	
	//����� 90�̻��̸� �� 80�̻� �� 70�̻� �� 60�̻� �� 60�� �̸� �� ���
	if(avg>=90){
		printf("��\n");
	}else if(avg>=80){
		printf("��\n");
	}else if(avg>=70){
		printf("��\n");
	}else if(avg>=60){
		printf("��\n");
	}else{
		printf("��\n");
	}
	
	//���� ��� ���� = � �����̶� 95�̻��̸�, "������" �ƴϸ� "����"
	if(edps>=95 || db>=95 || pg>=95){
		printf("������\n");
	}else{
		printf("����\n");
	}
	
	//������� = ��� ������ 90�̻��̸�, "������л�", �ƴϸ� "�Ϲ�"
	if(edps>=90 && db>=90 && pg>=90){
		printf("������л�\n");
	}else{
		printf("�Ϲ�\n");
	}
	
	//��� : 10���� ���� ������ 10�Ǵ� 9�̸� 1���, 8�̸� 2��� 
	//7�̸� 3���, �������� 5��� 
	int grade = avg/10;
	switch(grade){
		case 10:
		case 9:
			printf("��� ���: 1���\n");
			break;
		
		case 8:
			printf("��� ���: 2���\n");
			break;
		
		case 7:
			printf("��� ���: 3���\n");
			break;
		
		default:
			printf("��� ���: 5���\n");
			break;
	}
}
