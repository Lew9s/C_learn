#include<stdio.h>
typedef struct node{
	int num;
	struct node *next;
}LinkList;

LinkList *create(int n)
{
	LinkList *head, *node, *end;
	int i;
	head = (LinkList*)malloc(sizeof(LinkList));
	end = head;
	for(i=0;i<n;i++)
	{
		node = (LinkList*)malloc(sizeof(LinkList));
		scanf("%d",&node->num);
		end->next = node;
		end = node;
	}
	end->next=NULL;
	return head;
}

void print(LinkList *head)
{
	LinkList *a=head->next;
	printf("%d",a->num);
	a=a->next;
	while(a!=NULL)
	{
		printf(" %d",a->num);
		a=a->next;
	}
}

void del(LinkList *head, int a)
{
	int i;
	LinkList *p=head,*pr=head;
	while(i<a && p!=NULL)
	{
		pr=p;
		p=p->next;
		i++;
	}
	if(p!=NULL)
	{
		pr->next=p->next;
		free(p);
	}
}

int main()
{
	int n,a;
	LinkList *head; 
	scanf("%d",&n);
	head = create(n);
	scanf("%d",&a);
	del(head,a);
	print(head);
	return 0;
}
