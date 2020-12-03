#include <stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *top = 0;
int push();
int pop();
int display();
int peek();

int main()
{
	int choice;
 do{	
	printf("Menu\n1.Insert data\n2.Delet data\n3.Display data\n4.Peek data\n5.Exit\n");
	printf("\nEnter your choice:\t");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: peek();
			break;
		case 5: exit(0);
			break;
		default: printf("Invalid choice");
			break;
	}		
 }while(choice != 5);
}

int push()
{
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data:\n");
	scanf("%d", &newnode->data);
	newnode->link = top;
	top = newnode;
}

int pop()
{
	struct node *temp;
	temp = top;
	if(top == 0)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("The data you have deleted is %d\n", temp->data);
		top = top->link;
		free(temp);
	}
}

int peek()
{
	if(top == 0)
	{
		printf("List is empty\n");
	}

	else
	{
		printf("The peek data is %d\n", top->data);
	}
}

int display()
{
	struct node *temp;
	temp = top;
	if(top == 0)
	{
		printf("list is Empty");
	}
	else
	{
		printf("your Stack List:\n");
		while(temp != 0)
		{
			printf("%d\n", temp->data);
			temp = temp->link;
		}
	}
return 0;
}










































   




















