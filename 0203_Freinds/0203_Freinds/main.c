
#include "friend.h"

int main() {
	int person = 0, input;
	User user[MAX_COUNT];

	openfile(user, &person);

	while (1) {
		printf("================= [ 메뉴 ] ================\n");
		printf("1. 친구 추가\n");
		printf("2. 친구 삭제\n");
		printf("3. 친구 검색\n");
		printf("4. 친구 목록 보기\n");
		printf("5. 저장 및 나가기\n");
		printf("===========================================\n");
		printf("번호 선택: ");
		scanf("%d", &input);
		rewind(stdin);
		system("cls");
		if (input == 1) {
			printf("\n[ 친구 추가 ]\n");
			insert(user, &person);
		}
		else if (input == 2) {
			printf("\n[ 친구 삭제 ]\n");
			deleted(user, &person);
		}
		else if (input == 3) {
			printf("\n[ 친구 검색 ]\n");
			search(user, &person);
		}
		else if (input == 4) {
			printf("\n[ 친구 목록 보기 ]\n");
			print(user, &person);
		}
		else if (input == 5) {
			savefile(user, &person);
			return 0;
		}
		else
			printf("오류가 발생했습니다. 다시 시도해주세요.\n");
	}
	return 0;
}