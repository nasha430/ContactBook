#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

USERDATA* Search_test(USERDATA* Head)
{
	USERDATA* Current = Head;
	char* compareName = "";
	printf("검색하고 싶은 이름을 입력하세요 : ");
	scanf("%s", &compareName);
	//Current->pNext가 볼 포인터가 있고 구조체이름과 검색할 이름이 같지 않으면, Current주소는 다음 구조체로 넘어간다
	while (strcmp(Current->szName, compareName) != 0 && Current->pNext != NULL)
	{
		Current = Current->pNext;
	}
	//구조체 이름과 검색할 이름이 같으면 출력한다.
	if (strcmp(Current->szName, compareName) == 0) {
		printf("%s\n", Current->szName);
		printf("%s\n", Current->szPhone);
		printf("%s\n", Current->category);
	}
	return Current;
}


void Search(char* source) {
	printf("\n");
	printf("--------------------------------검색[S]--------------------------------\n");

	FILE* pFile = NULL;

	char name_tmp[100];
	char name_ans[15];

	printf("검색하고 싶은 이름을 입력하세요 : ");
	//gets(name_ans);
	scanf("%s", name_ans);
	puts(name_ans);

	pFile = fopen("ContactBook.txt", "r");
	if (pFile == NULL) perror("Error opening file");

	// feof : 주어진 스트림에서 EOF(End Of File. 파일의 끝)를 감지
	while (feof(pFile)) {
		fgets(name_tmp, 100, pFile);

		// fgets : fgets(버퍼,읽을 길이,파일);
		if (strstr(name_tmp, name_ans) != NULL) {
			// 파일을 한국어로 인코딩 해야지 됨
			printf("정보 찾음 : %s\n", name_tmp);
		}
	}
	fclose(pFile);
}