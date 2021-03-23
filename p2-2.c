#include <stdio.h>

void print1(int *ptr, int rows); //리턴 값이 없는 함수

int main()
{
	int one[] = {0, 1, 2, 3, 4}; // 정수형 배열 one

	printf("----- [민선홍] [2018038028] -----\n");
	printf("one     = %p\n", one); // 배열 이름 = one[0] 주소값 출력
	printf("&one    = %p\n", &one); // one의 주소 = one[0]의 주소 출력
	printf("&one[0] = %p\n", &one[0]); // one[0]의 주소값 출력
	printf("\n");

	print1(&one[0], 5); // 함수 호출

	return 0;
}

void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

	int i; // 정수형 i 변수 선언
	printf("Address \t Contents\n");
	for (i = 0; i < rows; i++) // for문 호출
	{
		printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 매개변수 포인터 ptr을 이용해, 4byte씩 증갛여 주소와 주소에 들어가 있는 값 출력
		printf("\n");
	}
}
