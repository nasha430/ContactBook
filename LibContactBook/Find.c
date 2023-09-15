#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* Find(USERDATA* Head, char* name)
{
	USERDATA* Current = Head;
	char FindTemp[15];
	char NameTemp[15] = malloc(sizeof(char) * 15);
	*NameTemp = ' ';

	while (Current->pNext != NULL)
	{
		printf("추가할 이름을 입력하세요:");
		scanf("%s", NameTemp);

		strcpy(FindTemp, Current->szName);
		if (*FindTemp == *NameTemp) {
			printf("중복된 이름입니다. 다시 입력해주세요!");
		}
		Current = Current->pNext;
	}
	*name = NameTemp;
	return name;
}