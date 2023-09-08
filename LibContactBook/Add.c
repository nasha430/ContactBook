#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct _USERDATA* pNext;
} USERDATA;
void Add() {
	
	
	USERDATA UserData = { 0,0,0 };
	static USERDATA* pTmp;
	USERDATA* ContactBook = &UserData;

	if (pTmp->szName == 0) {
		pTmp=NULL;
	}

	*ContactBook->szName = 0;
	if (*ContactBook->szName != 0) {
		ContactBook->pNext = pTmp->pNext;
	}

	printf("추가할 이름을 입력하세요:");
	scanf("%s", ContactBook->szName);
	printf("이름에 맞는 전화번호를 입력하세요(010-0000-0000):");
	scanf("%s", ContactBook->szPhone);
	printf("카테고리에 맞는 숫자를 입력하세요. 친구[0], 가족[1], 직장[2], 기타[3]:");
	scanf("%d", &ContactBook->category);
	
	FILE* pfile = NULL;
	pfile = fopen("Contactbook.txt", "a");
	fprintf(pfile, "전의 구조체를 바라보는 포인터%p\n", &pTmp);
	if (*ContactBook->szName != 0) {
		pTmp->pNext = &UserData;
	}
	
	fprintf(pfile,"\n");
	fprintf(pfile, "이름: %s, 전화번호: %s, 카테고리: %d, 현재tmp 포인터%p, 현재 pNext포인터%p", ContactBook->szName, ContactBook->szPhone, ContactBook->category, &pTmp, ContactBook->pNext);
	fclose(pfile);
}