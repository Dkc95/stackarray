#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int arr[MAX],top=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("\nMenu\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Display\n");
        printf("Enter Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        default:
            {
                printf("Wrong Choice");
            }
        }
    }
}

void push()
{
    int item;
    if(top==MAX-1)
    {
        printf("Stack Is Full");
    }
    else
    {
        printf("Enter The Elements");
        scanf("%d",&item);
        top=top+1;
        arr[top]=item;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        top=top-1;
        printf("Element Deleted");
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack Is Empty");
    }
    else
    {
         printf("Element Of Stack");
         for(i=top;i>=0;i--)
        {
           printf("\n%d",arr[i]);
        }
    }
}
