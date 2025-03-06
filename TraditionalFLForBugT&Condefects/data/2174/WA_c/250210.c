#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int result;
	int c;
	struct Node *next;
};
struct Node *creat()
{
	int a, b;
	struct Node *head, *q, *p;
	head = NULL;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		p = (struct Node *)malloc(sizeof(struct Node));
		if (b == 0)
		{
			p->c = 0;
		}
		else
		{
			p->c = 1;
			p->result = (int)((a / b) + 0.5);
		}
		if (head == NULL)
		{
			head = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
	}
	q->next = NULL;
	return head;
}
void print(struct Node *head)
{
	struct Node *p = head;
	while (p != NULL)
	{
		if (p->c == 0)
		{
			printf("error\n");
			p = p->next;
		}
		else
		{
			printf("%d\n", p->result);
			p = p->next;
		}
	}
}
int main()
{
	struct Node *head = creat();
	print(head);
	return 0;
}
