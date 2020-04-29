#include "friend.h"

//친구 검색
int search(User* ptr, int* num) {
	char name[30];
	int i;
	//저장된 친구 있을때
	if (*num > 0) {
		printf("친구 이름: ");
		scanf("%s", name);
		rewind(stdin);
		for (i = 0; i < MAX_COUNT; i++) {
			//문자열 비교 strcmp 참일때 return 0
			if (!strcmp(name, ptr[i].name)) {
				printf("이름 : %s\n", ptr[i].name);
				printf("나이 : %s\n", ptr[i].age);
				printf("전화번호 : %s\n\n", ptr[i].phonNo);
				return 0;
			}
		}
	}
	else {
		printf("친구를 찾을 수 없습니다.\n\n");
		return 0;
	}
}