#include "pch.h"
#include <stdio.h>
struct USERDATA 
{
	char szName[32];
	char szPhone[32];
	int category;
	struct _USERDATA* pNext;
};

void Add() {
	struct USERDATA USERDATA = {
		"±è°æ¼ö",
		"010-7554-9154",
		0,
		NULL
	};
	struct USERDATA *name = &USERDATA;
	
	printf("%s", name->szName);
}