#include<stdio.h>
#include<stdlib.h>
#define max 20
void insert();
void delete();
void display();
int queue_array[max];
int rear = -1;
int front = -1;
main()
{
    int choice;
    while(1)
    {
    	printf("********************************\n");
    	printf("Queue Operation\n");
    	printf("********************************\n");
        printf("1. Insert element of queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("********************************\n");
        printf("Enter your choice :: ");
        scanf("%d", &choice);
        printf("********************************\n");
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
}

void insert()
{
    int add_element;
    if(rear == max-1)
    printf("Queue is Overflow \n");
    else
    {
        if(front == -1)
        front = 0;
        printf("Insert the element in queue :: ");
        scanf("%d",&add_element);
        rear = rear + 1;
        queue_array[rear]=add_element;

    }
}
void delete()
{
    if(front == -1 || front > rear){
    
        printf("Queue is Underflow \n");
        return ;
    }
    
    else{
        printf("Element deleted from queue is :: %d\n",queue_array[front]);
        front = front + 1;
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty!!!\n");
    else{
        printf("Queue element is :: \n");
        for(i = front; i<= rear; i++)
            printf("%d ",queue_array[i]);
        printf("\n");
    }
}
