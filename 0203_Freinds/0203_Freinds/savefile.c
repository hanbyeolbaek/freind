#include "friend.h"

//�Է��� ģ�������� ���Ͽ� ����
int savefile(User* ptr, int* num) {
	if (*num > 0) {
		int i, state;
		FILE* fp = fopen("UserInfo.txt", "wt");
		//fopen �Լ� �����߻� �� ���α׷� ����
		if (fp == NULL) {
			printf("File Open Error!\n");
			return 1;
		}
		//�Էµ� ������ ���Ͽ� �ٹٲ� ���� ����
		for (i = 0; i < *num; i++) {
			fprintf(fp, "%s\t%s\t%s", ptr[i].name, ptr[i].age, ptr[i].phonNo);
			fputc('\n', fp);
		}
		//fclose ���� �� �ȳ� �� ���α׷� ����
		state = fclose(fp);
		if (state != 0) {
			printf("File Close Error!\n");
			return 1;
		}
		printf("�����Ͱ� ��� ����Ǿ����ϴ�.\n");
		return 0;
	}
	else {
		printf("���α׷��� �����մϴ�.\n");
		return 0;
	}
}