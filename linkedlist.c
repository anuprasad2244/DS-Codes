#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*top=NULL;
void Push()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter a data");
scanf("%d",&newnode->data);
newnode->next=top;
top=newnode;
printf("inserted sucessfully\n");
}
void pop()
{
struct node*temp;
if(top==NULL)
{
printf("stack underflow\n");
}
else
{
temp=top;
printf("deleted element:%d\n",top->data);
top=top->next;
free(temp);
}
}
void display()
{
struct node*temp;
if (top==NULL)
{
printf("stack is Empty\n");
}
else
{
temp=top;
printf("stack elements\n");
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}
int main()
{
int ch;
do
{
printf("\n1.push");
printf("\n2.pop");
printf("\n3.Display");
printf("\n4.Exit");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
Push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
printf("Exit");
break;
default:
printf("invalid choice");
}
}
while(ch!=4);
return 0;
}
