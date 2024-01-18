#include<stdio.h>
//입력 받은 세 개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.
//(num1-num2)x(num2+num3)x(num3%num1)

int main(void)
{
	int num1, num2, num3, result;
	printf("num1, num2, num3를 입력하세요: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("(%d - %d)x(%d + %d)x(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, result);
	return 0;
}