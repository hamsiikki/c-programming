#include <stdio.h>

int printInfo(void);

	int main(void)
{
		int result = printInfo();

		return result;

}

	int printInfo(void)
	{
		printf("FirstApp 프로그램\n");
		printf("작성자: 김해미\n");
		printf("버전:1.0\n");

		return 0;
	}