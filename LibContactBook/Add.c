#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct _USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct _USERDATA* pNext;
}USERDATA;
void Add(char* UserData) {
	USERDATA* ContactBook;
	// 현재(n) 포인터
	ContactBook = UserData;
	// 2번째부터 넣어줄 (n-1)포인터
	USERDATA pTmp;
	//printf("UserData 포인터: %p, pNext의 포인터 :%p", &UserData, ContactBook.pNext);
	printf("추가할 이름을 입력하세요:");
	scanf("%s", ContactBook->szName);
	printf("이름에 맞는 전화번호를 입력하세요(010-0000-0000):");
	scanf("%s", ContactBook->szPhone);
	printf("카테고리에 맞는 숫자를 입력하세요. 친구[0], 가족[1], 직장[2], 기타[3]:");
	scanf("%d", &ContactBook->category);

	FILE* pfile = NULL;
	pfile = fopen("Contactbook.txt", "a");
	fprintf(pfile,"\n");
	fprintf(pfile, "이름: %s, 전화번호: %s, 카테고리: %d, 현재 pNext포인터%p", ContactBook->szName, ContactBook->szPhone, ContactBook->category, UserData);
	fclose(pfile);
}