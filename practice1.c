//1. ����ڷκ��� 5���� ������ �迭�� �Է� ���� �� ���� �ϳ��� �߰��� �Է� �޾� �� ���� �迭�� � �����ϴ� ���� ����ϴ�
//���α׷��� �ۼ��Ͻÿ�.
//2. �л� 5���� ������ �Է� ���� ��, ��������� �ְ� ������ ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int number[5] = { 0 };
	int check = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &number[i]);
	}

	scanf("%d", &check);

	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		if (check == number[i])
			cnt++;
	}

	printf("%d\n", cnt);


	return 0;
}