#define _CRT_SECURE_NO_WARNINGS
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

void Add() {
	USERDATA UserData = { 0 };
	gets(UserData.szName);
	puts(UserData.szName);
}