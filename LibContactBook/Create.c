#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include <stdio.h>
#include <malloc.h>

Node* Create(ElementType newData) {
	Node* newNode = (Node*)malloc(sizeof(newData));
	memset(newNode, 0, sizeof(newData));
	newNode->newData = newData;
	newNode->pNext = NULL;
	return &newNode;
}