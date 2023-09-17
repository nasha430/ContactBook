#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
USERDATA* Reallocation(USERDATA* Head)
{

	USERDATA* Current = Head;
	FILE* pFile = NULL;
	char Name[100];
	char* pszSep = " ";
	char* pszToken = NULL;
	int a = 1;
	pFile = fopen("Contactbook.txt", "r");
	while (feof(pFile) == 0) {
		if (fgets(Name, 100, pFile) != EOF) {
			pszToken = strtok(Name, pszSep);
			while (pszToken != NULL) {
				puts(pszToken);
				pszToken = strtok(NULL, pszSep);
			}
			
			printf("%d\n", a);
		}
	}
	//while (Current != NULL)
	//{
	//	puts(Current);
	//	printf("[%p] ", Current);
	//	printf("이름: %s ", Current->szName);
	//	printf("전화번호: %s ", Current->szPhone);
	//	printf("카테고리: %d ", Current->category);
	//	printf("갖고있어야할 이전 구조체 포인터 : %p\n", Current->pNext);

	//	Current = Current->pNext;
	//}

	return Current;
}