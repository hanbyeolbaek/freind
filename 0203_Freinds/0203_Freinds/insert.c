
#include "friend.h"

//ģ�� �߰�
void insert(User* ptr, int* num) {
	//MAX_COUNT Ȯ��
	if (*num < MAX_COUNT) {
		printf("�̸�: ");
		scanf("%s", ptr[*num].name);
		rewind(stdin);
		printf("����: ");
		scanf("%s", ptr[*num].age);
		rewind(stdin);
		printf("��ȭ��ȣ: ");
		scanf("%s", ptr[*num].phonNo);
		rewind(stdin);
		(*num)++;
		printf("������ ����Ǿ����ϴ�.\n\n");
	}
	else
		printf("ģ�� ����� ��� ���ֽ��ϴ�.\n\n");
}