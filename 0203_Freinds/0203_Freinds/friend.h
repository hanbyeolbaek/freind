#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

#define MAX_COUNT 5

typedef struct Friend {
	char name[30];
	char age[5];
	char phonNo[30];
}User;


int openfile(User* ptr, int* num);
void insert(User* ptr, int* num);
int deleted(User* ptr, int* num);
int search(User* ptr, int* num);
void print(User* ptr, int* num);
int savefile(User* ptr, int* num);
