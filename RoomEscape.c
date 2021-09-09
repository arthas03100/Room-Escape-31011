#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0


void intro();
void room();
void a1(); //침대 
void a2(); //편지 
void a3(); //서랍 
void a4(); //화분 
void a5(); //상자 
void a6(); //출입 문
 
int isFindKey1 = FALSE;
int isFindKey2 = FALSE;
int isFindKey3 = FALSE;
int isFindKey4 = FALSE;
int isFindKey5 = FALSE;
int isFindKey6 = FALSE;

int isOpena6=FALSE;

int main() {
	int menu;
	
	while(1) {
		printf("방탈출\n\n");
		printf("1. 입장\n");
		printf("0. 종료\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("입력 오류\n\n");
				break;
		}
	}
}
	
void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("독방\n\n");
		printf("방 안에서 열쇠조각들을 찾아보자.\n\n");
		printf("1. 침대     2. 편지    3. 서랍\n");
		printf("4. 화분    5. 상자    6. 출입문\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				a1();
				break;
			case 2:
				a2();
				break;
			case 3:
					a3();				
				break;
			case 4:
				a4();
				break;
			case 5:
				a5();
				break;
			case 6:
				a6();
				break;
			default:
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
	}
	
} 

void intro() {
	system("cls");
	printf("\n\n");
	printf("테러범의 테러로 인해 인질로 잡혀있다\n");
	Sleep(1500);
	printf("테러범 사이에 있는 스파이가 열쇠조각들을 방안에 숨겨놓았을 것이다 .\n\n");
	Sleep(1500);
	printf("열쇠 조각 6개를 찾아내서 문을 열고 탈출해야한다.\n\n");
	Sleep(1500);
	system("pause");
}

void a2(){  
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[편지]\n\n");
		printf("1. 편지를 살펴본다\n");
		printf("2. 편지를 연다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
					printf("\n@^!&**#!@@!!&*&&*.\n");
				break;
			case 2:
				if(isFindKey1 && isFindKey2) {
							printf("\n열쇠조각 이미 찾음.\n\n");
						} else {
							isFindKey1 = TRUE;
							isFindKey2 = TRUE;
							printf("\n열쇠조각 2개를 찾음\n\n");
						}
						break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void a1(){  
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[침대]\n\n");
		printf("1. 침대를 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
			if(isFindKey3) {
							printf("\n열쇠조각 이미 찾음.\n\n");
						} else {
							isFindKey3 = TRUE;
							printf("\n열쇠조각 3을 찾음\n\n");
						}
						break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void a3(){  
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[서랍]\n\n");
		printf("1. 서랍을 살펴본다\n");
		printf("2. 서랍을 분해해본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n아무것도 없음\n\n");
				return;
			case 2:
				if(isFindKey4) {
							printf("\n열쇠조각 이미 찾음.\n\n");
						} else {
							isFindKey4 = TRUE;
							printf("\n분해하여 조각4 찾음\n\n");
						}
						break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	


void a4(){  
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[서랍]\n\n");
		printf("1. 화분을 살펴본다\n");
		printf("2. 흙을 파내어 본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n아무것도 없음\n\n");
				return;
			case 2:
				if(isFindKey5) {
							printf("\n열쇠조각 이미 찾음.\n\n");
						} else {
							isFindKey5 = TRUE;
							printf("\n분해하여 조각5 찾음\n\n");
						}
						break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void a5(){  
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[상자]\n\n");
		printf("1. 비밀번호 입력\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindKey6) {
							printf("\n열쇠조각 이미 찾음.\n\n");
						} else {
							isFindKey6 = TRUE;
							printf("\n편지에 있던 암호를 입력하여 열쇠조각 5을 얻었다\n\n");
						}
						break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	

void a6(){
	int menu;
	
	while(1) {
		system("cls");
		printf("[독방]-[문]\n\n");
		printf("엄청 단단해보이는 금고다.\n\n");
		printf("1. 문를 연다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindKey1 && isFindKey2 && isFindKey3 && isFindKey4 &&isFindKey5 && isFindKey6 ) {
					isOpena6 = TRUE; 
					printf("탈출 성공");
				} else {
					printf("\n열쇠를 못구함.\n\n");
				}
				break;
			case 0:
				return;
			default:
				printf("\n# ERROR # 입력값 오류\n\n");
				break;
		}
		system("pause");
	}	
}	


