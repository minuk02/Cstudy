#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define maxsize 1000000
int queue[maxsize];
int tail = -1; //ť�� ��
int head = -1; //ť�� �Ӹ�

void push()
{
	int input = 0;
	scanf(" %d", &input);

	if (tail != -1)
	{
		for(int i = tail+1; i>0; i--)
			queue[i] = queue[i-1];
		tail++;
		queue[0] = input;
	}
	else
		queue[++tail] = input;
}

void pop()
{
	if (tail == head)
		printf("%d\n", -1);
	else
	{
		printf("%d\n", queue[tail]);
		tail--;
	}
}

void size()
{
	printf("%d\n", tail+1);//tail�� �迭�� index�� ��Ÿ���� ����
}

void empty()
{
	if (head == tail)
		printf("False\n");
	else
		printf("True\n");	
}

void front()
{
	if (head == tail)
		printf("%d\n", -1);
	else
		printf("%d\n", queue[tail]);
}

void back()
{
	if (head == tail)
		printf("%d\n", -1);
	else
		printf("%d\n", queue[head+1]);
}

int main()
{
	char option = 0;
	while (1)
	{
		printf("0.exit\n"); //����
		printf("1.push\n"); //ť�� ť�� �ִ� �����̴�.
		printf("2.pop\n"); //ť���� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		printf("3.size\n"); //ť�� ����ִ� ������ ������ ����Ѵ�.
		printf("4.empty\n"); //�� ��������� Ture, �ƴϸ� False�� ����Ѵ�.
		printf("5.front\n"); //ť�� ���� ���� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		printf("6.back\n"); //ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���ÿ� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
		printf("-");

		scanf(" %c", &option);

		switch (option)
		{
		case '0':
			return 0;
			break;
		case '1':
			push();
			break;
		case '2':
			pop();
			break;
		case '3':
			size();
			break;
		case '4':
			empty();
			break;
		case '5':
			front();
			break;
		case '6':
			back();
			break;
		default:
			for (int i = 0; i <= tail; i++)
			{
				printf("%d ", queue[i]);
			}
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
	}
	return 0;
}