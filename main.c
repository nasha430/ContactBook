﻿#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include <stdio.h>
#include <malloc.h>


void main() {
	char* add = "";
	char* menu = malloc(sizeof(add) + 1); // size 4 동적할당입니다!
	memset(menu, 0, sizeof(add) + 1);
	char temp = "";



	USERDATA* Head = malloc(sizeof(USERDATA)+1);
	Head = NULL;
	USERDATA* NewNode = NULL;

	while (temp != 'X') {
		MainMenu(menu);
		temp = *menu;

		if (temp == 'A') {
			// 노드 생성
			NewNode = Create();
			// 노드 추가
			Add(&Head, NewNode);
		}
		else if (temp == 'P') {
			PrintAll();
		}

		else if (temp == 'S') {
			Search_test(Head);
		}
		else if (temp == 'C') {
			Category(Head);
		}
		else if (temp == 'R') {
			NewNode = SLL_GetNodeAt(Head);
			Remove(&Head, NewNode);
		}
		temp = "";
	}


}
