#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5]; //5개의 변수를 가지는 배열 선언
	int *plist[5] = {NULL,}; //포인터 배열, 초기화

	plist[0] = (int *)malloc(sizeof(int)); //4바이트를 가져와 plist[0]에 저장

	list[0] = 1; // list[0]에 1대입
	list[1] = 100; // list[1]에 100대입

	*plist[0] = 200; // plist[0]이 가리키는 곳에 200 대입

	printf("------민선홍------2018038028------\n");
	printf("value of list[0]=%d\n", list[0]); // list[0]값 출력 = 1
	printf("address of list[0]       = %p\n", &list[0]); // list[0]의 주소값 출력
	printf("value of list            = %p\n", list); // 배열의 이름 = list[0] 주소 값 출력
	printf("address of list (&list)   = %p\n", &list); // list 주소값 =list[0]의 주소값 출력

	printf("---------------------------------------\n\n");
	printf("value of list[1]         =%d\n", list[1]); // list[1] = 100 출력
	printf("address of list[1]       =%p\n", &list[1]); // list[1]의 주소값 출력
	printf("value of *(list+1)       =%d\n", *(list +1)); // list[0]에 1을 더한 값이 가리키는 값 = list[1]의 주소값(integer 크기 4)
	printf("address of list+1        =%p\n", list+1); // list[0] 주소에 integer 크기 4를 더해 list[1] 주소값 출력

	printf("----------------------------------------\n\n");

	printf("value of *plist[0]       =%d\n", *plist[0]); // plist[0]이 가리키고 있는 값 출력 = 200
	printf("&plist[0]                =%p\n", &plist[0]); // plist[0]의 주소값 출력
	printf("&plist                   =%p\n", &plist); // plist는 plist[0]과 같은표현 = plist[0] 주소값 출력
	printf("plist                    =%p\n", plist); // 배열의 이름 = plist[0] 주소값 출력
	printf("plist[0]                 =%p\n", plist[0]); //malloc로 인하여 할당된 heap영역 주소가 plist[0]에 저장되어 있어 가리키고 있는 주소 출력
	printf("plist[1]                 =%p\n", plist[1]); //값이 들어가있지 않아 NULL 출력
	printf("plist[2]                 =%p\n", plist[2]); //값이 들어가있지 않아 NULL 출력
	printf("plist[3]                 =%p\n", plist[3]); //값이 들어가있지 않아 NULL 출력
	printf("plist[4]                 =%p\n", plist[4]); //값이 들어가있지 않아 NULL 출력

	free(plist[0]);

}
