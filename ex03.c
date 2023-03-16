#include <stdio.h>
void main(){
	/*
	\'
	\"
	\?
	\\
	\a 경고음 출력 
	\n 줄바꿈 
	\t 수평 탭 
	\b 백스페이스 
	\r 캐리지 리턴 
	\f 폼 피드 
	\v 수직 탭 
	*/
	/*
	서식 지정자
	%c
	%s
	%d, %i
	%u 부호 없는 10진수 정수 
	%f, %lf
	%o
	%x
	%e, %E, %g, %G 지수 10의 6승 e+06
	%% 
	*/
	int num ,kor, eng, mat, tot;
	float avg = 0.0f;
	printf("번호: ");
	scanf("%d", &num);
	
	printf("국어 점수 : ");
	scanf("%d", &kor); 
	
	printf("영어 점수 : ");
	scanf("%d", &eng);
	
	printf("수학 점수 : ");
	scanf("%d", &mat);
	
	tot = kor + eng + mat;
	avg = tot / 3.0f;
	
	printf("번호\t국어\t영어\t수학\t총점\t평균\n");
	printf(" %d\t%d\t%d\t%d\t%d\t%.3f\n", num, kor, eng, mat, tot, avg);
	printf("평균 : %.3f", avg);
	
}
