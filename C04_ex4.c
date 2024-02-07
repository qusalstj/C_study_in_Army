#include<Stdio.h>
int main(void)
{
	int num1 = 15;
	int num2 = ~num1;
	printf("Not연산의 결과: %d \n", num2);
	printf("num1은 바뀌었는가? %d \n", num1);
	return 0;
}