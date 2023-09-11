#pragma once

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];
	int category;
	struct USERDATA* pNext;
} USERDATA;

void MainMenu(menu_tmp);
USERDATA* Create();
void Add(USERDATA** Head, USERDATA* NewNode);
void Search();
void PrintAll();
void Remove();
void Update();
void Category();
void UI();
void Exit();

