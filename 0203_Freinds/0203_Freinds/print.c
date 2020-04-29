#include "friend.h"

//모든 친구 목록 불러오기
void print(User* ptr, int* num) {
	int i = 0;
	if (*num > 0) {
		for (i = 0; i < *num; i++) {
			printf("이름 : %s\n", ptr[i].name);
			printf("나이 : %s\n", ptr[i].age);
			printf("전화번호 : %s\n", ptr[i].phonNo);
		}
		printf("저장된 모든 친구가 표시되었습니다.\n\n");
	}
	else
		printf("저장된 친구가 없습니다.\n\n");
}