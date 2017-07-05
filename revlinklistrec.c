#include<stdio.h>
#include<stdlib.h>
struct node
{
	
int info;
struct node* next;

};
struct node* head=NULL;
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
void revlist(struct node* temp,struct node* temp2)
{
if (temp2!=NULL)
{
	revlist(temp2,temp2->next);
	temp2->next=temp;
	temp->next=NULL;

}
else()
{
	head=temp;
}
}

int main()
{    
	int data;
	char ch;
	do
	{
    scanf("%d ",&data);
    addinfo(&head,data); 
    scanf("%c",&ch );
    }while(ch=='y'||ch=='Y');
    printlist(head);
    revlist(head,head->next);
    printlist(head);
    return 0;
}