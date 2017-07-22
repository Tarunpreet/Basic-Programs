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
void print()
{
 struct node* temp1;
  temp1=head;
printf("THE NUMBER IS ");
  while(temp1!=NULL)
{

printf (" %d",temp1->data);
temp1 = temp1->next;
}
printf("\n");
}
void addmiddle(int x1)
{
int count=0,i,mid;
struct node* p=(struct node*)malloc(sizeof(struct node));
struct node* q=head;
struct node* temp;
p->data=x1;
p->next=NULL;
while(q!=NULL)
{
q=q->next;
count++;
}
q=head;
mid=count/2;
if(mid==0)
{
q->next=p;
}
else if(mid!=0)
{
for(i=0;i<mid;i++)
{
temp=q;
q=q->next;
}
temp->next=p;
p->next=q;
}
}
int main()
{
head=NULL;
int n,x,i,x1;
 printf("ENTER HOW MANY NUMBERS  ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("ENTER NUMBER ");
scanf("%d",&x);
insert(x);
print();
}
printf("ENTER THE ELEMENT");
scanf("%d",&x1);
addmiddle(x1);
print();
return 0;
}

