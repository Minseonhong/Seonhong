#include<stdio.h>


struct student1{
	char lastName;
	int studentId;
	char grade;
}; // 변수 3개를 갖는 구조체 student1 선언

typedef struct{
	char lastName;
	int  studentId;
	char grade;
} student2; // typedef 사용, 변수 3개를 갖는 구조체 student2 선언

int main(){
	struct student1 st1 = {'A', 100, 'A'}; // student1 자료형을 갖는 변수 st1에 A,100,A를 대입

	printf("[----- [민선홍] [2018038028] -----\n]");
	printf("st1.lastName = %c\n", st1.lastName); // st1변수에 저장된 lastName을 출력
	printf("st1.studentId = %d\n", st1.studentId); // st1변수에 저장된 studentId를 출력
	printf("st1.grade = %c\n", st1.grade); // st1변수에 저장된 grade를 출력

	student2 st2 = {'B', 200, 'B'}; // stdent2 자료형을 갖는 변수 st2에 B,200,B를 대입. (typedef를 선언하였기 때문에 struct 쓸 필요 x)

	printf("\nst2.lastName = %c\n", st2.lastName); // st2변수에 저장된 lastName을 출력
	printf("st2.studentId = %d\n", st2.studentId); // st2변수에 저장된 studentId를 출력
	printf("st2.grade = %c\n", st2.grade); // student2의 grade를 출력


	student2 st3; // student2 자료형을 갖는 변수 st3를 선언

	st3 = st2; // 변수 st3에 st2를 대입(구조치환을 사용하여 가능)
	printf("\nst3.lastName = %c\n", st3.lastName);// st3변수에 저장된 lastName을 출력 = st2.lastName
	printf("st3.studentId = %d\n", st3.studentId);// st3변수에 저장된 studentId를 출력 = st2.studentId
	printf("st3.grade = %c\n", st3.grade);// st3변수에 저장된 grade를 출력 = st2.grade

	/* equality test
	if(st3==st2) // 사용할수 없다
		printf("equal\n");
	else
		printf("not equal\n");
	*/

	return 0;
}
