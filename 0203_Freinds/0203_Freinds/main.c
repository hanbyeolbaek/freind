
#include "friend.h"

int main() {
	int person = 0, input;
	User user[MAX_COUNT];

	openfile(user, &person);

	while (1) {
		printf("================= [ �޴� ] ================\n");
		printf("1. ģ�� �߰�\n");
		printf("2. ģ�� ����\n");
		printf("3. ģ�� �˻�\n");
		printf("4. ģ�� ��� ����\n");
		printf("5. ���� �� ������\n");
		printf("===========================================\n");
		printf("��ȣ ����: ");
		scanf("%d", &input);
		rewind(stdin);
		system("cls");
		if (input == 1) {
			printf("\n[ ģ�� �߰� ]\n");
			insert(user, &person);
		}
		else if (input == 2) {
			printf("\n[ ģ�� ���� ]\n");
			deleted(user, &person);
		}
		else if (input == 3) {
			printf("\n[ ģ�� �˻� ]\n");
			search(user, &person);
		}
		else if (input == 4) {
			printf("\n[ ģ�� ��� ���� ]\n");
			print(user, &person);
		}
		else if (input == 5) {
			savefile(user, &person);
			return 0;
		}
		else
			printf("������ �߻��߽��ϴ�. �ٽ� �õ����ּ���.\n");
	}
	return 0;
}