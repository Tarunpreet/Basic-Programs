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
int i;
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp -> data=x;
temp -> next = NULL;
if(head==NULL)
{
head=temp;
}
if(head!=temp)
{
struct node* temp1=head;
while(temp1!=NULL)
{
if(temp1 -> next==NULL)
{
temp1 -> next = temp;
return;
}
temp1=temp1->next;
}
}
}
void print()
{
struct node* temp=head;
printf("LIST IS ");
while(temp!=NULL)
{
printf("%d",temp -> data);
temp = temp -> next;
}
}
int main()
{
int n,x,i;
head=NULL;
printf("HOW MANY ELEMENTS ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("ENTER THE ELEMENT ");
scanf("%d",&x);
insert(x);
print();
}

}
