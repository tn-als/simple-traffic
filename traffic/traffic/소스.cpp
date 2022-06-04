#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int light;

	printf("현재 신호등의 색은? \n1.빨간색 \n2.초록색 \n");
	scanf("%i", &light);

	if (light == 1)
		printf("멈추시오.");
	else if (light == 2)
		printf("건너시오.");
	else
		printf("잘못선택했습니다.");
	return 0;
}