#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5]; // 5칸 배열 선언
	int*plist[5]; // 5칸 포인터 배열 선

	list[0] = 10; // list[0]에 10 대입
	list[1] = 11; // list[1]에 11 대입

	plist[0] = (int*)malloc(sizeof(int)); //heap 영역에서 int의 크기 4바이트 할당 후 plist[0]에 주소 대입

	printf("----- [민선홍] [2018038028] -----");
	printf("list[0] \t= %d\n", list[0]); // list[0]의 값 10 출력
	printf("address of list \t= %p\n", list); // 배열 이름 = list[0]의 주소 출력
	printf("address of list[0] \t= %p\n", &list[0]); // list[0]의 주소 출력
	printf("address of list + 0 \t= %p\n", list+0); // list[0]의 주소 출력
	printf("address of list + 1 \t= %p\n", list+1); // list[0]의 주소에 4를 더한 값,list[1]의 주소 출력
	printf("address of list + 2 \t= %p\n", list+2); // list[0]의 주소에 8를 더한 값,list[2]의 주소 출력
	printf("address of list + 3 \t= %p\n", list+3); // list[0]의 주소에 12를 더한 값,list[3]의 주소 출력
	printf("address of list + 4 \t= %p\n", list+4); // list[0]의 주소에 16를 더한 값,list[4]의 주소 출력
	printf("address of list[4] \t= %p\n", &list[4]); // list[4]의 주소 출력

	free(plist[0]);
}
