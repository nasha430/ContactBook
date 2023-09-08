#include "pch.h"
#include <stdio.h>
#include <malloc.h>

typedef struct _USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct _USERDATA* pNext;
} USERDATA;

void main() {


	char menu = (char*)malloc(sizeof(char) + 1); // size 4 동적할당
	char temp = "";

	while (temp != 'X') {
		temp = MainMenu(menu);

		if (temp == 'A') {
			printf("hi");
			Add();
		}
	}
}
