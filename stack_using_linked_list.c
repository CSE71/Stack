
#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

struct node *top=NULL;

void push();
void pop();
void peek();
void display();
int menu();

struct node* createNode()
{

struct node *tdx;
tdx=(struct node*)malloc(sizeof(struct node));
return tdx; 
}



int main()
{
while(1)
{
	switch(menu())
	{
		case 1:push();
				break;
		case 2:pop();
				break;
		case 3:peek();
				break;
		case 4:display();
				break;
		case 5:exit(0);
		
		default: printf("\nInvalid choice!");								
	}
}
return 0;
}



void push()
{
struct node *temp;
temp=createNode();
printf("\nEnter data:");
scanf("%d",&temp->data);
temp->next=NULL;

if(top==NULL)
top=temp;

else
{
temp->next=top;
top=temp;
}
printf("\nElement successfully added");
}

void pop()
{

struct node * t;
if(top==NULL)
printf("\nUnderflow condition reached!");

else
{
t=top;

printf("\n%d from stack successfully removed",t->data);
top=top->next;
//t->next=NULL;
free(t);
}

}

 

void display()
{
struct node *t;


if(top==NULL)
printf("\nStack is Empty");

else
{
t=top;
	while(t!=NULL)
	{
	printf("%d\n",t->data);
	t=t->next;
	}
}
}

void peek()
{
	if(top==NULL)
	printf("\nThe stack is empty");
	else
	printf("%d",top->data);
}

int menu()
{
int ch;
printf("\n\n1.Push");
printf("\n2.pop");
printf("\n3.peek");
printf("\n4.display");
printf("\n5.exit");
printf("\nEnter choice:");
scanf("%d",&ch);
return ch;
}

