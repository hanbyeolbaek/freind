
#include "friend.h"

//����� ������ �ҷ�����
int openfile(User* ptr, int* num) {
	int state;
	//char temp;
	FILE* fp = fopen("UserInfo.txt", "rt");

	if (fp == NULL) {
		//printf("File Open Error!\n");
		return 1;
	}
	//���� ������ ����ü�� �Է�
	while (1) {
		fscanf(fp, "%s\t%s\t%s", ptr[*num].name, ptr[*num].age, ptr[*num].phonNo);
		if (feof(fp) != 0)
			break;
		(*num)++;
	}
	//fclose ���� ���� �߻� �� �ȳ� �� ����
	state = fclose(fp);
	if (state != 0) {
		printf("File Close Error!\n");
		return 1;
	}
	return 0;
}