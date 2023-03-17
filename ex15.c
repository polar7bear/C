#include <stdio.h>
void main(){
	int i;
	int sum = 0;
	int score[3] = {85, 65, 90};
	score[3] = 100;
	for(i=0;i<4;i++){
		sum += score[i];
	}
	int arr_len = sizeof(score)/sizeof(score[0]) + 1; //C - 배열의 길이를 구하는 공식 
	printf("배열 score의 길이는 %d입니다.\n", arr_len);
	printf("과목 총 점수 합계는 %d이고, 평균 점수는 %f입니다.\n", sum, (double)sum / arr_len);
}
