#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include <stdio.h>
#include <malloc.h>


void main() {
	char* add;
	char* menu = malloc(sizeof(add)); // size 4 동적할당입니다!
	memset(menu, 0, sizeof(add));
	char temp = "";

	USERDATA* ContactList = (USERDATA*)malloc(sizeof(USERDATA));
	ContactList = NULL;
	USERDATA* NewNode = NULL;

	while (temp != 'X') {
		MainMenu(menu);
		temp = *menu;

		if (temp == 'A') {
			// 노드 생성
			NewNode = Create();
			// 노드 추가
			Add(&ContactList, NewNode);
		}
		else if (temp == 'L') {
			Reallocation(ContactList);
		}

		else if (temp == 'P') {
			PrintAll(ContactList);
		}
		else if (temp == 'S') {
			Search();
		}
		else if (temp == 'C') {
			Category(&ContactList);
		}
		else if (temp == 'R') {
			NewNode = SLL_GetNodeAt(ContactList);
			Remove(&ContactList, NewNode);
		}
		temp = "";
	}
}
