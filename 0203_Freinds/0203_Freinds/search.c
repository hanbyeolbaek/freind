#include "friend.h"

//ģ�� �˻�
int search(User* ptr, int* num) {
	char name[30];
	int i;
	//����� ģ�� ������
	if (*num > 0) {
		printf("ģ�� �̸�: ");
		scanf("%s", name);
		rewind(stdin);
		for (i = 0; i < MAX_COUNT; i++) {
			//���ڿ� �� strcmp ���϶� return 0
			if (!strcmp(name, ptr[i].name)) {
				printf("�̸� : %s\n", ptr[i].name);
				printf("���� : %s\n", ptr[i].age);
				printf("��ȭ��ȣ : %s\n\n", ptr[i].phonNo);
				return 0;
			}
		}
	}
	else {
		printf("ģ���� ã�� �� �����ϴ�.\n\n");
		return 0;
	}
}