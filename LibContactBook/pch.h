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
USERDATA* PrintAll(USERDATA* Head);
USERDATA* SLL_GetNodeAt(USERDATA* Head);
void Remove(USERDATA** Head, USERDATA* Remove);
void Update();
void Category(USERDATA* Head);

void PrintAllUI();
void MainMenuUI();
void RemoveUI();
void CategoryUI();
void CreateUI();
void SearchUI();

USERDATA* Reallocation();
void Exit();

