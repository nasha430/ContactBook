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
USERDATA* Add(USERDATA** Head, USERDATA* NewNode);
void Search();
void Search_test();
void PrintAll();
USERDATA* SLL_GetNodeAt(USERDATA* Head);
void Remove(USERDATA** Head, USERDATA* Remove);
void Update();
void Category(USERDATA* Head);
void RemoveUI();
void CategoryUI();
void CreateUI();
void Exit();
void InputFile();
