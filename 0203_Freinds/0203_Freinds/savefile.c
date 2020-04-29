#include "friend.h"

//입력한 친구데이터 파일에 저장
int savefile(User* ptr, int* num) {
	if (*num > 0) {
		int i, state;
		FILE* fp = fopen("UserInfo.txt", "wt");
		//fopen 함수 오류발생 시 프로그램 종료
		if (fp == NULL) {
			printf("File Open Error!\n");
			return 1;
		}
		//입력된 데이터 파일에 줄바꿈 구분 저장
		for (i = 0; i < *num; i++) {
			fprintf(fp, "%s\t%s\t%s", ptr[i].name, ptr[i].age, ptr[i].phonNo);
			fputc('\n', fp);
		}
		//fclose 오류 시 안내 후 프로그램 종료
		state = fclose(fp);
		if (state != 0) {
			printf("File Close Error!\n");
			return 1;
		}
		printf("데이터가 모두 저장되었습니다.\n");
		return 0;
	}
	else {
		printf("프로그램을 종료합니다.\n");
		return 0;
	}
}