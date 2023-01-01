#include <stdio.h>
#include <stdlib.h>
#include <../include/multiplayer.h>

void main(void)
{
	int a, b;
	printf("請輸入遊玩人數，b=");
	scanf("%d", &b);
	printf("請輸入0~a，a=");
	scanf("%d", &a);
	multiplayer(a, b);

}