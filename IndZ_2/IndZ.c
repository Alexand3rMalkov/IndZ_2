#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "rus");
	int a, x;
	printf("������� ������� ������ ������� ����������� � ������ 75 ����� �� �����:\n");
	scanf("%d", &a);
	printf("������� ������� ������ ������� ����������� � ��������� ����� �� �����:\n");
	scanf("%d", &x);
	printf("�� ����������: %d ������", ((133 - 75) * x) + (75 * a));
}