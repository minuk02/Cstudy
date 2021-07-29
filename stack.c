#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define maxsize 1000000
int stack[maxsize] = { 0 }; //���ù迭
int topstack = -1; //���ÿ� �� ���� ����

//���ÿ� �ִ� �����̴�
void push()
{
	int number; //���ÿ� �� �� �Է�
	scanf(" %d", &number);
	stack[++topstack] = number;
}
//���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
void pop()
{
	if (topstack == -1)
		printf("%d", topstack);
	else
	{
		printf("%d\n", stack[topstack]);
		topstack--;
	}
}
//���ÿ� ����ִ� ������ ������ ����Ѵ�.
void size()
{
	printf("���ÿ� ����ִ� ������ ���� : %d\n", topstack+1);
}
//������ ��������� Ture, �ƴϸ� False�� ����Ѵ�.
void empty()
{
	if (topstack == -1)
		printf("False\n");
	else
		printf("True\n");
}
//������ ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
void top()
{
	if (topstack == -1)
		printf("%d\n", topstack);
	else
	{
		printf("-%d\n\n", stack[topstack]);
	}
}

int main()
{
	printf("0.����\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.size\n");
	printf("4.empty\n");
	printf("5.top\n");
	int option; //�ɼǼ���

	while (1)
	{
		scanf_s(" %d", &option);
		switch (option)
		{
		case 0:
			return 0;
			break;
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			size();
			break;
		case 4:
			empty();
			break;
		case 5:
			top();
			break;
		default:
			printf("�߸��� �����Դϴ�.\n");
			break;
		}
	}
}