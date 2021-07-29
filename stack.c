#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define maxsize 1000000
int stack[maxsize] = { 0 }; //스택배열
int topstack = -1; //스택에 들어간 개수 저장

//스택에 넣는 연산이다
void push()
{
	int number; //스택에 들어갈 수 입력
	scanf(" %d", &number);
	stack[++topstack] = number;
}
//스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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
//스택에 들어있는 정수의 개수를 출력한다.
void size()
{
	printf("스택에 들어있는 정수의 개수 : %d\n", topstack+1);
}
//스택이 비어있으면 Ture, 아니면 False를 출력한다.
void empty()
{
	if (topstack == -1)
		printf("False\n");
	else
		printf("True\n");
}
//스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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
	printf("0.종료\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.size\n");
	printf("4.empty\n");
	printf("5.top\n");
	int option; //옵션선택

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
			printf("잘못된 선택입니다.\n");
			break;
		}
	}
}