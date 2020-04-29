
#include "friend.h"

//친구 추가
void insert(User* ptr, int* num) {
	//MAX_COUNT 확인
	if (*num < MAX_COUNT) {
		printf("이름: ");
		scanf("%s", ptr[*num].name);
		rewind(stdin);
		printf("나이: ");
		scanf("%s", ptr[*num].age);
		rewind(stdin);
		printf("전화번호: ");
		scanf("%s", ptr[*num].phonNo);
		rewind(stdin);
		(*num)++;
		printf("정보가 저장되었습니다.\n\n");
	}
	else
		printf("친구 목록이 모두 차있습니다.\n\n");
}