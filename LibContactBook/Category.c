#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>

void Category(USERDATA* Head) {
    int categ;
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