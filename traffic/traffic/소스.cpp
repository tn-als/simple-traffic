#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int light;

	printf("���� ��ȣ���� ����? \n1.������ \n2.�ʷϻ� \n");
	scanf("%i", &light);

	if (light == 1)
		printf("���߽ÿ�.");
	else if (light == 2)
		printf("�ǳʽÿ�.");
	else
		printf("�߸������߽��ϴ�.");
	return 0;
}