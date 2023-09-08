#include <stdio.h>
#include <malloc.h>

void main() {

	//free(UserData);
	//UserData = malloc(sizeof(memory));
	//memset(UserData, 0, sizeof(memory));
	//Add(UserData);
	//Add(UserData);
	while (1) {
		char* ContactBook ;
		char* UserData = malloc(sizeof(ContactBook));
		memset(UserData, 0, sizeof(ContactBook));
		Add(UserData);
	}
}
