#include <stdio.h>
void main(){
	/*
	\'
	\"
	\?
	\\
	\a ����� ��� 
	\n �ٹٲ� 
	\t ���� �� 
	\b �齺���̽� 
	\r ĳ���� ���� 
	\f �� �ǵ� 
	\v ���� �� 
	*/
	/*
	���� ������
	%c
	%s
	%d, %i
	%u ��ȣ ���� 10���� ���� 
	%f, %lf
	%o
	%x
	%e, %E, %g, %G ���� 10�� 6�� e+06
	%% 
	*/
	int num ,kor, eng, mat, tot;
	float avg = 0.0f;
	printf("��ȣ: ");
	scanf("%d", &num);
	
	printf("���� ���� : ");
	scanf("%d", &kor); 
	
	printf("���� ���� : ");
	scanf("%d", &eng);
	
	printf("���� ���� : ");
	scanf("%d", &mat);
	
	tot = kor + eng + mat;
	avg = tot / 3.0f;
	
	printf("��ȣ\t����\t����\t����\t����\t���\n");
	printf(" %d\t%d\t%d\t%d\t%d\t%.3f\n", num, kor, eng, mat, tot, avg);
	printf("��� : %.3f", avg);
	
}
