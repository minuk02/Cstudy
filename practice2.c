//2. �л� 5���� ������ �Է� ���� ��, ��������� �ְ� ������ ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[5] = { 0 };
	int max = 0;
	double ave = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		max += score[i];
	}

	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		if (temp < score[i])
			temp = score[i];
	}

	ave = (double)max / 5;
	printf("��� : %.1f �ְ����� : %d\n", ave, temp);

	return 0;
}