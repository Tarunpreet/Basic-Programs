#include<stdio.h>
#include<stdlib.h>
struct node
{
	
int info;
struct node* next;

};
void addinfo(struct node* * head,int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	struct node* temp2;
	temp->info=data;
	temp->next=NULL;
	if (*head==NULL)
	{
		*head=temp;
	}
    
	else if(*head!=NULL)
	{
	temp2=(*head);	
    while(temp2->next!=NULL)
    {
    	temp2=temp2->next;
    }
    temp2->next=temp;
    }
}
void printlist(struct node*  head)
{
 while(head!=NULL)
 {
 	printf("%d\n",head->info );
    head=head->next;
 }
}
void revlist(struct node* *head)
{
struct node* current=*head;
struct node* prev=NULL;
struct node* next;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
*head=prev;
}
int main()
{    
	struct node* head=NULL;
	int data;
	char ch;
	do
	{
    scanf("%d ",&data);
    addinfo(&head,data); 
    scanf("%c",&ch );
    }while(ch=='y'||ch=='Y');
    printlist(head);
    revlist(&head);
    printlist(head);
    return 0;
}