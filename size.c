#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **x;
	/* 32비트의 컴파일러를 사용하고 있어서 포인터의 크기가 4바이트 */
	printf("[----- [민선홍] [2018038028] -----]\n");
	printf("sizeof(x) = %lu\n", sizeof(x)); // 32비트로 보았을 때, 주소를 저장하고 있기 때문에 4바이트 출력
	printf("sizeof(x) = %lu\n", sizeof(*x)); // *x도 포인터이므로 주소를 저장하고 있어, 포인터의 크기 = 4 출력
	printf("sizeof(**x) = %lu\n",sizeof(**x)); // **x의 크기인 4 출력
}
