#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
1. insert X : X 를 linked list 맨 뒤에 추가한다. 
2. inset X  N : X 를 N 오른쪽에 추가한다. (단, N이 없다면 없다고 출력)
3. print ALL : Linked list 에 있는 모든 data를 출력한다. 
4. Delete X : Linked List 맨 뒤 data를 삭제한다. 
5. Delete N : linked list 안에 있는 N을 삭제한다. 
6. Search N : linked list 안에 N이 있다면 1 없다면 0을 출력한다. 
*/

typedef struct node {
	int data;
	struct node* next;
}node;

void insert(node *target, int x)
{	
	node* newnode = (node*)malloc(sizeof(node));
	
	if (target->next == NULL)
	{
		newnode->data = x;
		newnode->next = NULL;

		target->next = newnode;
	}
	else
	{
		node* temp = target;  //읽는 노드
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		newnode->data = x;
		newnode->next = NULL;

		temp->next = newnode;
	}
}

void inset(node *target, int x, int n) // X 를 N 오른쪽에 추가
{
	node* temp = target;//검사노드
	node* newnode = (node*)malloc(sizeof(node));

	while (temp != NULL)
	{
		if (temp->data == n)
		{
			newnode->data = x;
			newnode->next = temp->next;

			temp->next = newnode;
			return;
		}
		temp = temp->next;
	}

	printf("%d가 없습니다.\n", n);

}

void printAll(node* target)
{
	node* curr = target->next;
	while (curr != NULL)
	{
		printf("%d->", curr->data);
		curr = curr->next;
	}
	printf("NULL\n");
}

void delete_end(node* target)
{
	node* temp = target->next; //검사노드
	while (temp->next != NULL)
	{
		temp = temp->next;
		target = target->next;
	}
	target->next = NULL;
	free(temp);
}

void delete(node* target, int x)
{
	node* temp = target->next; //검사노드
	while (temp->next != NULL)
	{
		if (temp->data == x)
		{
			target->next = temp->next;
			free(temp);
			return;
		}
		temp = temp->next;
		target = target->next;
	}
}

void search(node* target, int x)
{
	node* temp = target->next;
	while (temp != NULL)
	{
		if (temp->data == x)
		{
			printf("%d\n", 1);
			return;
		}
		temp = temp->next;
	}
	printf("%d\n", 0);
}

int main()
{
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;

	while (1)
	{
		char option = ' ';
		scanf(" %c", &option);


		int data = 0;//삽입할 데이터
		int n = 0; //2번 항목의 N
		switch (option)
		{
		case '1':
			scanf(" %d", &data);
			insert(head, data);
			break;
		case '2':
			scanf(" %d %d", &n, &data);
			inset(head, data, n);
			break;
		case '3':
			printAll(head);
			break;
		case '4':
			delete_end(head);
			break;
		case '5':
			scanf(" %d", &data);
			delete(head, data);
			break;
		case '6':
			scanf(" %d", &data);
			search(head, data);
			break;
		default:
			break;
		}

	}


}