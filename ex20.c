#include <stdio.h>
//구조체와 공용체
struct book { //구조체 : 자바의 클래스와 같이 여러 멤버를 하나의 이름으로 구조화함
	char title[30];
	char author[30];
	int price; 
}; 
typedef union{ //공용체 : 여러 멤버들이 하나의 메모리 공간을 활용하여 공유
	unsigned char a;
	unsigned short b;
	unsigned int c; 
} SHAREDATA;

enum Weather {SUNNY = 0, CLOUD = 10, RAIN =20, SNOW = 30}; //열거형

void main(void) {
	 //구조체 활용
	 struct book my_book = {"HTML과 CSS", "홍길동", 28000};
	 struct book java_book = {.title = "Java language", .price = 30000}; //특정멤버들만 불러오고 싶을땐 앞에 . 
	 
	 printf("첫 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", my_book.title, my_book.author, my_book.price);
	 printf("두 번째 책의 제목은 %s이고, 저자는 %s이며, 가격은 %d원입니다.\n", java_book.title, java_book.author, java_book.price);
	 
	 //공용체 활용
	 SHAREDATA var;
	 var.c = 0x12345678;
	 printf("%x\n", var.a);
	 printf("%x\n", var.b);
	 printf("%x\n", var.c);
	 
	 //열거형 활용
	 enum Weather wt;
	 wt = SUNNY;
	 switch(wt){
	 	case SUNNY:
	 		puts("오늘은 햇볕이 쨍쨍");
	 		break;
	 	case CLOUD:
	 		puts("구름이 껴 흐림");
	 		break;
	 	case RAIN:
	 		puts("비가 내리니 우산을 챙기세요.");
	 		break;
	 	case SNOW:
	 		puts("오늘은 눈이 내립니다.");
	 		break;
	 	default: puts("날씨를 예측하기 힘듭니다.");
	 } 
	 puts("각각의 열거체에 해당하는 정수값은 다음과 같습니다.");
	 printf("%d %d %d %d\n", SUNNY, CLOUD, RAIN, SNOW);
} 
