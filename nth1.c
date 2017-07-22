#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* next;
};
struct node* head;
void insert(int x,int pos)
{
int i;
struct node* temp= (struct node*)malloc(sizeof(struct node));
struct node* temp2;
temp -> data=x;
temp -> next =NULL;
if(pos==1)
{
temp -> next =head;
head = temp;
return;
}
temp2 = head;
for(i=0;i<pos-2;i++)
{
temp2=temp2 ->next;
}
temp -> next= temp2 -> next;
temp2 -> next =temp;
}
void print()
{
struct node* temp;
temp=head;
printf("LIST IS ");
while(temp -> next != NULL)
{
printf("%d",temp->data );
temp =temp -> next;
}
printf("\n");
}
int main()
{
int n,x,i,pos;
head=NULL;
printf("HOW MANY NUMBERS YOU WANT TO ADD ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("ENTER THE NUMBER  ");
 scanf("%d",&x);
 printf("ENTER THE POSITION " );
 scanf("%d",&pos);
 insert(x,pos);
print();
}
return 0;
}
