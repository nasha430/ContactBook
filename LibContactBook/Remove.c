#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>
#include <locale.h>

USERDATA* SLL_GetNodeAt(USERDATA* Head)
{
	printf("\n");
	printf("--------------------------------삭제[R]--------------------------------\n");
	char removeName[15];

	printf("삭제하고 싶은 이름을 입력하세요 : ");
	scanf("%s", removeName);
	getchar();

	USERDATA* Current = Head;

	while (Current != NULL && removeName==Head->szName)
	{
		Current = Current->pNext;
	}

	return Current;
}

void Remove(USERDATA** Head, USERDATA* Remove) {

	//  노드 제거 
	{
		if (*Head == Remove)
		{
			*Head = Remove->pNext;
		}
		else
		{
			USERDATA* Current = *Head;
			while (Current != NULL && Current->pNext != Remove)
			{
				Current = Current->pNext;
			}

			if (Current != NULL)
				Current->pNext = Remove->pNext;
		}
	}
}