#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void RemoveUI() {
	printf("\n");
	printf("--------------------------------삭제[R]--------------------------------\n");
	printf("삭제하고 싶은 이름을 입력하세요 : ");
}

void CategoryUI() {
	printf("\n");
	printf("--------------------------------카테고리 출력[C]--------------------------------\n");
	printf("보고 싶은 카테고리에 맞는 숫자를 입력하세요. 친구[0], 가족[1], 직장[2], 기타[3]: ");
}