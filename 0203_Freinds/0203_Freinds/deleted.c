
#include "friend.h"

//친구 목록 삭제
int deleted(User* ptr, int* num) {
	char name[30];
	int i, j;
	//친구 목록에 저장된 값이 있을 경우
	if (*num > 0) {
		printf("친구 이름: ");
		scanf("%s", name);
		rewind(stdin);
		//이름 비교
		for (i = 0; i < MAX_COUNT; i++) {
			//문자열 비교 strcmp 사용
			if (strcmp(name, ptr[i].name) == 0) {
				(*num)--;
				printf("입력하신 친구가 삭제되었습니다.\n\n");
				//목록에 공간이 남아있을때
				if (i != MAX_COUNT - 1) {
					for (j = i; j < MAX_COUNT; j++) {
						//문자열 복사 strcpy 사용
						strcpy(ptr[j].name, ptr[j + 1].name);
						strcpy(ptr[j].age, ptr[j + 1].age);
						strcpy(ptr[j].phonNo, ptr[j + 1].phonNo);
					}
					//user 구조체 마지막 NULL로 변경
					*ptr[MAX_COUNT - 1].name = NULL;
					*ptr[MAX_COUNT - 1].age = NULL;
					*ptr[MAX_COUNT - 1].phonNo = NULL;
				}
				//목록 가득 찼을때
				else {
					*ptr[MAX_COUNT - 1].name = NULL;
					*ptr[MAX_COUNT - 1].age = NULL;
					*ptr[MAX_COUNT - 1].phonNo = NULL;
				}
			}
		}
	}
	//친구 정보 찾을 수 없을때
	else {
		printf("친구가 존재하지 않습니다.\n\n");
		return 0;
	}
}