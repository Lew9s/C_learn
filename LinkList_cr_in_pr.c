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

void insert(LinkList *head,int b,int a)
{
	LinkList *p=head,*pr;
	pr=(LinkList*)malloc(sizeof(LinkList));
	pr->num=b;
	int i;
	while(i<a && p!=NULL)
	{
		p=p->next;
		i++;
	}
	if(p!=NULL)
	{
		pr->next=p->next;
		p->next=pr;
	}
}

int main()
{
	int n,a,b;
	LinkList *head; 
	scanf("%d",&n);
	head = create(n);
	scanf("%d %d",&b,&a);
	insert(head,b,a);
	print(head);
	return 0;
}
