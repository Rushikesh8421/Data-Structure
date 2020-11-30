#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int stack[max_size], top = -1;
int push();
int display();
int pop();
int pali();
int main()
{
    int choice;
    do
    {
        printf("Main menu\n1.Push\n2.Pop\n3.Palindrome\n4.Display\n5.Exit\n");
        printf("\nEnter your choice:\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: push();
            break;
        case 2: pop(); 
            break;
        case 3: pali();
            break;
        case 4: display();
            break;  
        case 5: exit(0);
            break;             
        
        default:printf("\nInvalid choice:\n");
            break;
        }
    } while (choice != 5);
    
}
int push()
{
    int item;
    if(top == (max_size-1))
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        printf("Enter the element to be inserted:\t");
        scanf("%d", &item);
        top++;
        stack[top] = item;
    }
    
}
int pop()
{
    int item;
    if(top == -1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("\nThe popped element is:%d\t",item);
    }
    
}
int pali()
{
    int digit,j,k,len=top+1,ind=0;
    int num[max_size],rev[max_size],i=0;
    int length = 0;
    while (top!=-1)
    {
        digit = stack[top];
        num[i] = digit;
        top--;
        i++;
    }
    for ( j = 0; j < len; j++)
    {
        printf("Numbers = %d\n", num[j]);
    }
    printf("Reverse operation:\n");
    for ( k = len-1; k >= 0; k--)
    {
        rev[k] = num[ind];
        ind++;
    }
    printf("Reverse array: ");
    for ( k = 0; k < len; k++)
    {
        printf("%d\n",rev[k]);
    }
    printf("Check for Plaindrome: \n");
    for(i = 0;i<len;i++)
    {
        if (num[i] == rev[i])
        {
            length = length+1;
        }
        
    }
    if (length == len)
    {
        printf("It is palindrome number");
    }
    else
    {
        printf("It is not a palindrome\n");
    }
    top = len-1;
}
int display()
{
    int i;
    if (top == -1)
    {
        printf("\n Stack is Empty");
    }
    else
    {
        printf("\nThe stack elements are:\n");
        for ( i = top; i >=0; i--)
        {
            printf("%d\n",stack[i]);
        }
        
    }
    
}