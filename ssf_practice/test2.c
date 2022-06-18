#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{
		printf("동 -> 서\t\t\t     북 -> 남\t\t\t\t  서 -> 동\t\t\t       남 -> 북\n");
		printf("빨간불\t\t\t\t     빨간불\t\t\t\t  빨간불\t\t\t\t\t   직진초록불 좌회전초록불");
		Sleep(5000);
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t     노란불");
		Sleep(2000);
		printf("\n\t    직진초록불 좌회전초록불  빨간불\t\t\t\t  빨간불\t\t\t       빨간불");
		Sleep(5000);
		printf("\n      노란불");
		Sleep(2000);
		printf("\n빨간불\t\t\t\t\t\t 직진초록불 좌회전초록불  빨간불\t\t\t       빨간불");
		Sleep(5000);
		printf("\n\t\t\t\t\t   노란불");
		Sleep(2000);
		printf("\n빨간불\t\t\t\t     빨간불\t\t\t\t\t      직진초록불 좌회전초록불  빨간불");
		Sleep(5000);
		printf("\n\t\t\t\t\t\t\t\t\t\t노란불");
		Sleep(2000);
	}
	return 0;
}