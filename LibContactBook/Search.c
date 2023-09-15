#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Search(char* source) {
	SearchUI();

	FILE* pFile = NULL;

	char name_tmp[100];
	char name_ans[15];

	//gets(name_ans);
	scanf("%s", name_ans);
	puts(name_ans);

	pFile = fopen("ContactBook.txt", "r");
	if (pFile == NULL) perror("Error opening file");

	// feof : 주어진 스트림에서 EOF(End Of File. 파일의 끝)를 감지
	while (feof(pFile) == 0) {
		fgets(name_tmp, 100, pFile);

		// fgets : fgets(버퍼,읽을 길이,파일);
		if (strstr(name_tmp, name_ans) != NULL) {
			// 파일을 한국어로 인코딩 해야지 됨
			printf("정보 찾음 : %s\n", name_tmp);
		}
	}
	fclose(pFile);
}