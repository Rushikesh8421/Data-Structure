#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int creat_array(int a[], int size)
{
    for(int i=0;i<size;i++){
        scanf("%d", &a[i]);
    }   
}

int display_element(int a[], int size)
{
    for (int i = 0;i<size;i++){
        printf("%d\n", a[i]);
    }
}

int insert_array(int item, int a[], int size, int pos)
{   
    if(pos<0||pos>size){
        printf("Invalid input\n");
        return size;
    }

    for (int i = size-1; i >= pos; i--)
    {
        a[i+1] = a[i];
    }
    a[pos] = item;
    return size+1;
}

int del_array(int a[], int size, int pos)
{
    if(pos<0||pos>=size){
        printf("Invalid input\n");
        return size;
    }
    printf("Your deleted item is %d\n", a[pos]);
    for (int i = pos+1; i < size; i++)
    {
        a[i-1] = a[i];
    }
    return size-1;
}

int main()
{
    int choice, a[10], size, item, pos;
    
    for (;;)
    {
        printf("\n.....Menu.....\n");
        printf("1.Creat an array\n2.Display an array\n3.Insert an Element\n4.Delete an Element\n5.Exit\n");
        printf("Enter the Choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: printf("Enter the number of elements:\n");
            scanf("%d", &size);
            printf("Enter %d Elements:\n", size);
            creat_array(a, size);
            break;
        case 2: printf("the contents of the array are\n");
        display_element(a,size);
        break;
        case 3: printf("enter the item to be inserted\n");
        scanf("%d",&item); 
        printf("enter the position\n");
        scanf("%d",&pos);
        size=insert_array(item,a,size,pos);
        break;
        case 4: printf("enter the position\n");
        scanf("%d",&pos);
        size=del_array(a,size,pos);
        break;
        case 5:exit(0);
        break;   
        
        default:printf("Invalid condition");
            break;
        }
    }
    
     
}
