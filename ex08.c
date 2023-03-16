#include <stdio.h>
void main(){
	int edps=95, db=90, pg=95, tot = 0;
	
	char pass = 'T';
	float avg = 0.0f;
	tot = (edps+db+pg);
	avg = (float) tot/3;
	
	printf("총점 : %d\n", tot);
	printf("평균 : %.2f\n", avg);
	
	//만약 평균이 60이상이면 pass는 T이고 아니면 F 
	if(avg<60) {
		pass = 'F';
		printf("합격여부 : 불합격입니다.\n");
	}else{
		pass = 'T'; 
		printf("합격여부 : 합격입니다.\n");
	}
	
	//평균이 90이상이면 수 80이상 우 70이상 미 60이상 양 60점 미만 가 출력
	if(avg>=90){
		printf("수\n");
	}else if(avg>=80){
		printf("우\n");
	}else if(avg>=70){
		printf("미\n");
	}else if(avg>=60){
		printf("양\n");
	}else{
		printf("가\n");
	}
	
	//과목 우수 여부 = 어떤 과목이라도 95이상이면, "과목우수" 아니면 "보통"
	if(edps>=95 || db>=95 || pg>=95){
		printf("과목우수\n");
	}else{
		printf("보통\n");
	}
	
	//참고사항 = 모든 과목이 90이상이면, "우수장학생", 아니면 "일반"
	if(edps>=90 && db>=90 && pg>=90){
		printf("우수장학생\n");
	}else{
		printf("일반\n");
	}
	
	//등급 : 10으로 나눈 몫으로 10또는 9이면 1등급, 8이면 2등급 
	//7이면 3등급, 나머지는 5등급 
	int grade = avg/10;
	switch(grade){
		case 10:
		case 9:
			printf("평균 등급: 1등급\n");
			break;
		
		case 8:
			printf("평균 등급: 2등급\n");
			break;
		
		case 7:
			printf("평균 등급: 3등급\n");
			break;
		
		default:
			printf("평균 등급: 5등급\n");
			break;
	}
}
