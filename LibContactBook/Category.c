#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>

void Category(USERDATA* Head) {
	printf("\n");
	printf("--------------------------------카테고리 출력[C]--------------------------------\n");
    int categ;

    printf("보고 싶은 카테고리에 맞는 숫자를 입력하세요. 친구[0], 가족[1], 직장[2], 기타[3]: ");
    scanf("%d", categ);
    getchar();
    USERDATA* Current = Head;

    printf("카테고리: %d ", categ);

    while (Current != NULL)
    {
        if (Current->category == categ) {
            printf("[%p] ", Current);
            printf("이름: %s ", Current->szName);
            printf("전화번호: %s ", Current->szPhone);
            
            Current = Current->pNext;
        }
        else {
            Current = Current->pNext;
        }
        
            
    }

}