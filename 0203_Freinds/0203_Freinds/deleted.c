
#include "friend.h"

//ģ�� ��� ����
int deleted(User* ptr, int* num) {
	char name[30];
	int i, j;
	//ģ�� ��Ͽ� ����� ���� ���� ���
	if (*num > 0) {
		printf("ģ�� �̸�: ");
		scanf("%s", name);
		rewind(stdin);
		//�̸� ��
		for (i = 0; i < MAX_COUNT; i++) {
			//���ڿ� �� strcmp ���
			if (strcmp(name, ptr[i].name) == 0) {
				(*num)--;
				printf("�Է��Ͻ� ģ���� �����Ǿ����ϴ�.\n\n");
				//��Ͽ� ������ ����������
				if (i != MAX_COUNT - 1) {
					for (j = i; j < MAX_COUNT; j++) {
						//���ڿ� ���� strcpy ���
						strcpy(ptr[j].name, ptr[j + 1].name);
						strcpy(ptr[j].age, ptr[j + 1].age);
						strcpy(ptr[j].phonNo, ptr[j + 1].phonNo);
					}
					//user ����ü ������ NULL�� ����
					*ptr[MAX_COUNT - 1].name = NULL;
					*ptr[MAX_COUNT - 1].age = NULL;
					*ptr[MAX_COUNT - 1].phonNo = NULL;
				}
				//��� ���� á����
				else {
					*ptr[MAX_COUNT - 1].name = NULL;
					*ptr[MAX_COUNT - 1].age = NULL;
					*ptr[MAX_COUNT - 1].phonNo = NULL;
				}
			}
		}
	}
	//ģ�� ���� ã�� �� ������
	else {
		printf("ģ���� �������� �ʽ��ϴ�.\n\n");
		return 0;
	}
}