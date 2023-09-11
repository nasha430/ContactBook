#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>
#include <locale.h>

void PrintAll() {
	printf("\n");
	printf("--------------------------------전체 출력[P]--------------------------------\n");

	FILE* pFile = NULL;
	char mystring[100];

	pFile = fopen("ContactBook.txt", "r");
	if (pFile == NULL) perror("Error opening file");

	// feof : 주어진 스트림에서 EOF(End Of File. 파일의 끝)를 감지
	while (feof(pFile) == 0) {
		// fgets : fgets(버퍼,읽을 길이,파일);
		if (fgets(mystring, 100, pFile) != EOF) {
			// 파일을 한국어로 인코딩 해야지 됨
			printf("%s\n", mystring);
		}
	}
	fclose(pFile);
} 