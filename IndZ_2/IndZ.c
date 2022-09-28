#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	int a, x;
	printf("Введите сколько рублей мальчик зарабатывет с первых 75 газет за штуку:\n");
	scanf("%d", &a);
	printf("Введите сколько рублей мальчик зарабатывет с остальных газет за штуку:\n");
	scanf("%d", &x);
	printf("Он заработает: %d рублей", ((133 - 75) * x) + (75 * a));
}