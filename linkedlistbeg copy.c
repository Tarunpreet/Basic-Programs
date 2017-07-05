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
	temp->info=data;
	temp->next=*head;
	*head=temp;
}
void printlist(struct node*  temp)
{
 if(temp!=NULL)
 {
 printf("%d",temp->data);
 temp=temp->next;
 printlist(temp);
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