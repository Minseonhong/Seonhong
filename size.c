#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **x;
	/* 32비트의 컴파일러를 사용하고 있어서 포인터의 크기가 4바이트 */
	printf("[----- [민선홍] [2018038028] -----]\n");
	printf("sizeof(x) = %lu\n", sizeof(x)); // x는 이중포인터이므로 포인터의 크기 = 4 출력
	printf("sizeof(x) = %lu\n", sizeof(*x)); // *x도 포인터이므로 포인터의 크기 = 4 출력
	printf("sizeof(**x) = %lu\n",sizeof(**x)); // **x의 크기인 4 출력
}
