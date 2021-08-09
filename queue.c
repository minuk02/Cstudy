#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define maxsize 1000000
int queue[maxsize];
int tail = -1; //큐의 끝
int head = -1; //큐의 머리

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
	printf("%d\n", tail+1);//tail은 배열의 index를 나타내기 때문
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
		printf("0.exit\n"); //종료
		printf("1.push\n"); //큐를 큐에 넣는 연산이다.
		printf("2.pop\n"); //큐에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		printf("3.size\n"); //큐에 들어있는 정수의 개수를 출력한다.
		printf("4.empty\n"); //이 비어있으면 Ture, 아니면 False를 출력한다.
		printf("5.front\n"); //큐의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
		printf("6.back\n"); //큐의 가장 뒤에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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
			printf("잘못된 입력입니다.\n");
			break;
		}
	}
	return 0;
}