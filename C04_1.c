#include<stdio.h>
//입력받은 정수의 부호를 변환하는 프로그램을 만들어라. 단 비트 연산자만 사용하여 문제를 해결할 것.
int main(void)
{
	int num, result;
	printf("정수를 입력하세요: ");
	scanf_s("%d",&num);
	result = ~num;
	result += 1;
	printf("출력: %d", result);
	return 0;
}