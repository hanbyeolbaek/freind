#include "friend.h"

//��� ģ�� ��� �ҷ�����
void print(User* ptr, int* num) {
	int i = 0;
	if (*num > 0) {
		for (i = 0; i < *num; i++) {
			printf("�̸� : %s\n", ptr[i].name);
			printf("���� : %s\n", ptr[i].age);
			printf("��ȭ��ȣ : %s\n", ptr[i].phonNo);
		}
		printf("����� ��� ģ���� ǥ�õǾ����ϴ�.\n\n");
	}
	else
		printf("����� ģ���� �����ϴ�.\n\n");
}