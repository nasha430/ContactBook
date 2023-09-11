
#define _CRT_SECURE_NO_WARNINGS

#include "pch.h"
#include <stdio.h>
#include <malloc.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct USERDATA* pNext;
} USERDATA;

void main() {
	char* add = "";

	char* menu = malloc(sizeof(add) + 1); // size 4 �����Ҵ�

	memset(menu, 0, sizeof(add) + 1);
	char temp = "";

	while (temp != 'X') {
		MainMenu(menu);
		temp = *menu;

		if (temp == 'A') {
			char* UserData = malloc(sizeof(UserData));
			memset(UserData, 0, sizeof(UserData));
			Add(UserData);
		}
		else if (temp == 'P') {
			PrintAll();
		}

		else if (temp == 'S') {
			Search();
		}
		else if (temp == 'C') {
			Category();
		}
		else if (temp == 'R') {
			Remove();
		}
		temp = "";
	}

	
}
