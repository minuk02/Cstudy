#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

/*
1. insert X : X �� linked list �� �ڿ� �߰��Ѵ�. 
2. inset X  N : X �� N �����ʿ� �߰��Ѵ�. (��, N�� ���ٸ� ���ٰ� ���)
3. print ALL : Linked list �� �ִ� ��� data�� ����Ѵ�. 
4. Delete X : Linked List �� �� data�� �����Ѵ�. 
5. Delete N : linked list �ȿ� �ִ� N�� �����Ѵ�. 
6. Search N : linked list �ȿ� N�� �ִٸ� 1 ���ٸ� 0�� ����Ѵ�. 
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
		node* temp = target;  //�д� ���
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		newnode->data = x;
		newnode->next = NULL;

		temp->next = newnode;
	}
}

void inset(node *target, int x, int n) // X �� N �����ʿ� �߰�
{
	node* temp = target;//�˻���
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

	printf("%d�� �����ϴ�.\n", n);

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
	node* temp = target->next; //�˻���
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
	node* temp = target->next; //�˻���
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


		int data = 0;//������ ������
		int n = 0; //2�� �׸��� N
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