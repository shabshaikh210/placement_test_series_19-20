#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
	int data;
	struct NODE *next;
}NODE;
NODE *head;
NODE *create(int data)
{
	NODE *temp;
	temp=(NODE *)malloc(sizeof(NODE));
	temp->data=data;
	temp->next=NULL;

	if(head!=NULL)
	{
	temp->next=head;
	
	}
	head=temp;
	return head;
	
}
NODE *addNumber(NODE *head)
{
	int sum,carry,digit,rem;
	NODE *temp,*ans;
	ans=head;
	printf("\nEnter Number to add in ll=");
	scanf("%d",&digit);
	carry=digit;
	while(head!=NULL)
	{
	sum=head->data+carry;
	carry=sum/10;
	sum=sum%10;

	head->data=sum;
	temp=head;
	head=head->next;
	}
	if(carry!=0)
	{
	temp->next=create(carry);
	temp=temp->next;
	temp->next=NULL;	
	}

	return ans;
}

NODE *reverse(NODE *head)
{
	NODE *prev,*current,*next;
	current=head;
	prev=NULL;
	while(current!=NULL)
	{
	next=current->next;
	current->next=prev;
	prev=current;
	current=next;
	}

	head=prev;
	return head;
}
void display(NODE *head)
{
	NODE *temp;
	temp=head;
	while(temp!=NULL)
	{
	printf("-->%d",temp->data);
	temp=temp->next;
	}
}
int main()
{
	int i,data,n;
	NODE *head,*nn;

	printf("\nHow many Nodes?");
	scanf("%d",&n);
	printf("\nAccept data=");
	for(i=0;i<n;i++)
	{
	printf("\nEnter data=");
	scanf("%d",&data);
	head=create(data);
	}
	printf("Reverse Linked list=");
	display(head);

	printf("\nAddition=");
	n=addNumber(head);
	display(n);

	printf("\nsolution=");
	n=reverse(n);
	display(n);
	
	
}
