#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct USERDATA* pNext;
} USERDATA;

void Add(char* UserData) {
	USERDATA* ContactBook;
	// 동적할당 받은 주소를 구조체 변수에 할당하기
	ContactBook = UserData;

	// 새로운 값의 주소를 임시 저장
	static USERDATA* pTmp;
	USERDATA* prevContactBook = UserData;


	printf("추가할 이름을 입력하세요:");
	scanf("%s", ContactBook->szName);
	printf("이름에 맞는 전화번호를 입력하세요(010-0000-0000):");
	scanf("%s", ContactBook->szPhone);
	printf("카테고리에 맞는 숫자를 입력하세요. 친구[0], 가족[1], 직장[2], 기타[3]:");
	scanf("%d", &ContactBook->category);
	getchar();

	// 완전 처음에!
	if (pTmp == NULL) {
		// 현재 구조체는 NULL , 다음 주소에 넘길 주소를 pTmp 에 저장
		pTmp = UserData;
		ContactBook->pNext = NULL;

		prevContactBook->pNext = NULL;
	}
	else {
		// 이전 구조체 주소에 현재 주소 넣기
		prevContactBook = pTmp;
		prevContactBook->pNext = UserData;

		// 현재 구조체는 NULL , 다음 주소에 넘길 주소를 pTmp 에 저장
		pTmp = UserData;
		ContactBook->pNext = NULL;
	}


	FILE* pfile = NULL;
	pfile = fopen("Contactbook.txt", "a");
	fprintf(pfile, "\n");
	//fprintf(pfile, "이름: %s, 전화번호: %s, 카테고리: %d:, 이전 구조체 포인터: %p, 현재 구조체 주소: %p, 현재 구조체 포인터(null 이어야함..): %p, ", ContactBook->szName, ContactBook->szPhone, ContactBook->category,  prevContactBook->pNext, ContactBook, ContactBook->pNext);
	fprintf(pfile, "이름: %s\n", ContactBook->szName);
	fprintf(pfile, "이전 구조체 포인터 : %p\n", prevContactBook);
	fprintf(pfile, "현재 구조체 주소 : %p\n", ContactBook);
	fprintf(pfile, "현재 구조체 포인터(null 이어야함..) : %p", ContactBook->pNext);
	fclose(pfile);
}