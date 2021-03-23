#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100// MAX_SIZE 100의 값을 정의
float sum(float list[], int); // float sum 함수
float input[MAX_SIZE], answer; //배열과 변수(answer)를 전역으로 선언.
int i;// 전역변수 i선언
int main()
{
	for(i=0; i<MAX_SIZE; i++) //for문을 이용해 i=0부터 100(매크로)까지 1씩 증가시킨다.
		input[i] =i;// input[i]에 i 대입
	/*for checking call by reference */
	printf("----- [민선홍] [2018038028] -----\n");
	printf("address of input = %p\n", input);//배열의 이름 = input[0]의 주소값 출력

	answer = sum(input, MAX_SIZE);// answer의 값은 sum함수의 반환 값.
	printf("The sum is: %f\n", answer);// sum함수에서 반환 값(answer)을 출력.

}

float sum(float list[], int n)// 자료형이 float인 sum 함수
{
	printf("value of list = %p\n", list); // list = input, input의 주소 출력
	printf("address of list = %p\n\n", &list); // list가 할당된 메모리의 주소 출력

	int i; // int형 변수 i 선언
	float tempsum =0; // float형 변수 tempsum에 0 대입
	for(i=0; i<n; i++) //for문을 이용해 i=0부터 n까지 1씩 증가시킨다.(n은 매개변수 이므로 MAX_SIZE의 값)
		tempsum +=list[i]; // list의 값들을 tempsum에 더해준다.
	return tempsum; // tempsum의 값을 반환한다.
}
