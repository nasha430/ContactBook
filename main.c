#include "pch.h"
#pragma warning(disable :4996)
#include <stdio.h>
#include <malloc.h>

void main() {
	char menu = (char*)malloc(sizeof(char) + 1); // size 4 동적할당
	char temp = "";

	while (temp != 'X') {
		temp = MainMenu(menu);

		if (temp == 'A') {
			Add();
		}
		else if (temp == 'P') {
			PrintAll();
		}
	}
}
