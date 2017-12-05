#include "Stringsort_Head.h"

/*#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
char *trivial(char str[], int n, int d);
char *juggling(char str[], int n, int d);
char *blockswap(char str[], int n, int d);
char *reverse(char str[], int n, int d);*/

/*
int main()
{
	printf("������ main �ڵ��Դϴ�.\n������� ������ ������ ���� main�Լ��� �ּ�ó���ϰ� �ϴ� main�Լ��� ����ϼ���.\n");
	char str[10000];
	int d;
	int n;
	srand(time(NULL));
	printf("���ڿ��� �� ������ n�� rotation ��� d�� �Է��ϼ���\n");
	scanf("%d %d", &n, &d);
	//str = (char*)malloc(n+1);
	for (int i = 0; i < n; i++)
	str[i] = (rand() % 26) + 'A';
	str[n] = NULL;
	printf("���� ���ڿ�: %s\n", str);
	printf("�ٲ� ���ڿ�: %s\n", reverse(str, n, d));		//���⿡ �ڽ��� ���� �Լ��� �־� ������ϼ���
	return 0;
}
*/

int main()
{
	char *str;
	int d;
	int n;
	int posi_nega;
	srand(time(NULL));
	
	//printf("���ڿ��� �� ������ n�� rotation ��� d�� �Է��ϼ���\n");
	//scanf("%d %d", &n, &d);

	//0�̸� d�� ��� 1�̸� d�� ����
	posi_nega = (rand() % 2);
	n = (rand() % 1000) + 1;
	d = (rand() % n) + 1;
	if (posi_nega == 1)
		d = -d;

	str = (char*)malloc(sizeof(char) * n+1);
	for (int i = 0; i < n; i++)
		str[i] = (rand() % 26) + 'A';
	str[n] = NULL;

	printf("STRLength\tROTATEdistance\t\tT.trivial\tT.Juggle\tT.bw\t\tT.reverse\n");
	printf("%-16d%-24d", n, d);

	time_t exetime = clock();
	//trivial(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	juggling(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	blockswap(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	reverse(str, n, d);
	printf("%-16f\n", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	return 0;
}
