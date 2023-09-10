#include "pch.h"
#include <stdio.h>
#include <malloc.h>

void MainMenu(char* menu) {
	printf("\n");
	printf("--------------------------------전화번호부 인터페이스--------------------------------\n");
	printf("추가[A]  검색[S]  전체 출력[P]  삭제[R]  수정[U]  카테고리 출력[C]  프로그램 종료[X]\n");

	char menu_tmp;
	printf("원하시는 명령어를 입력하세요 : ");

	scanf_s("%c", &menu_tmp, 1);
	*menu = menu_tmp;
}