
#include "friend.h"

//저장된 데이터 불러오기
int openfile(User* ptr, int* num) {
	int state;
	//char temp;
	FILE* fp = fopen("UserInfo.txt", "rt");

	if (fp == NULL) {
		//printf("File Open Error!\n");
		return 1;
	}
	//파일 데이터 구조체에 입력
	while (1) {
		fscanf(fp, "%s\t%s\t%s", ptr[*num].name, ptr[*num].age, ptr[*num].phonNo);
		if (feof(fp) != 0)
			break;
		(*num)++;
	}
	//fclose 종료 오류 발생 시 안내 후 종료
	state = fclose(fp);
	if (state != 0) {
		printf("File Close Error!\n");
		return 1;
	}
	return 0;
}