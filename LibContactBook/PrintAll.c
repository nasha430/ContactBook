#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>
#include <locale.h>

USERDATA* PrintAll(USERDATA* Head)
{

	USERDATA* Current = Head;

	while (Current != NULL)
	{
		printf("[%p] ", Current);
		printf("�̸�: %s ", Current->szName);
		printf("��ȭ��ȣ: %s ", Current->szPhone);
		printf("ī�װ�: %d ", Current->category);
		printf("���� ����ü ������ : %p\n", Current->pNext);

		Current = Current->pNext;
	}

	return Current;
}
