#include<stdio.h>

struct student{
	char lastName[13]; // 13바이트
	int studentId; // 4바이트
	short grade; // 2
}; // 변수 3개를 갖는 구조체 student를 선언

int main()
{
	struct student pst; //struct student 자료형을 갖는 변수 pst를 선언

	printf("----- [민선홍] [2018038028] -----\n");
	printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 크기 출력13+4+2+ 5(채워넣기) = 24
	printf("size of int = %ld\n", sizeof(int)); // integer형의 크기인 4 출력
	printf("size of short = %ld\n", sizeof(short)); // short형의 크기인 2 출력

	return 0;
}
