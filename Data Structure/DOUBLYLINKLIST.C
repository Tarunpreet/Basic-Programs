#include<stdio.h>
#include<stdlib.h>
struct node
{
	
int info;
struct node* next;
struct node* prev;

};
void addinfo(struct node* * head,int data)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->next=*head;
	if(*head==NULL)
	{
	temp->prev=NULL;
     
    }
    else
    {
    (*head)->prev=temp;
    }
	*head=temp;
	
}
void printlist(struct node*  head)
{
struct node* temp;
 while(head!=NULL)
 {
 	printf("%d\n",head->info );
    temp=head;
    head=head->next;
 }
while(temp!=NULL)
{
	printf("\n%d\n",temp->info);
	temp=temp->prev;
}

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
    return 0;
}