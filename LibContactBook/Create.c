#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

//  ��� ���� 
USERDATA* Create(USERDATA** Head) {
	CreateUI();

	USERDATA* ContactBook = (USERDATA*)malloc(sizeof(USERDATA));

	char* name = (char*)malloc(sizeof(char));
	char phone[32];
	int num = 0;

	Find(*Head, name);

	printf("�̸��� �´� ��ȭ��ȣ�� �Է��ϼ���(010-0000-0000):");
	scanf("%s", phone);
	printf("ī�װ��� �´� ���ڸ� �Է��ϼ���. ģ��[0], ����[1], ����[2], ��Ÿ[3]:");
	scanf("%d", &num);
	getchar();

	strcpy(ContactBook->szName, name);
	strcpy(ContactBook->szPhone, phone);
	ContactBook->category = num;  //  �����͸� �����Ѵ�. 
	ContactBook->pNext = NULL; //  ���� ��忡 ���� �����ʹ� NULL�� �ʱ�ȭ �Ѵ�. 

	//printf("%s_%s_%d\n", ContactBook->szName, ContactBook->szPhone, ContactBook->category);

	return ContactBook;
}

USERDATA* Create_Pointer() {
	USERDATA* ContactBook = (USERDATA*)malloc(sizeof(USERDATA)+1);
	memset(ContactBook, 0, sizeof(USERDATA) + 1);
	ContactBook->pNext = NULL;

	return ContactBook;
}