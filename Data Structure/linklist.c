#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next; 
};
struct node* head;
void insert(int x)
{
 
 struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp -> data=x;
  temp -> next=head;
  head = temp;
}
void PrintAlternate(struct node* head)
{
	if(head==NULL)
	{
		return;
	}
	if(head->next!=NULL)
	{
	PrintAlternate(head->next->next);
    }
  printf("%d\n",head->data);
}
// void print()
// {
//  struct node* temp1;
//   temp1=head;
// printf("THE NUMBER IS ");
//   while(temp1!=NULL)
// {

// printf (" %d",temp1->data);
// temp1 = temp1->next;
// }
// printf("\n");
// }
int main()
{
head=NULL;
int n,x,i;
 printf("ENTER HOW MANY NUMBERS  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("ENTER NUMBER ");
scanf("%d",&x);
insert(x);
// print();
}
PrintAlternate(head);
return 0;
}

