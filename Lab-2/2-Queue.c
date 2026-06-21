// Write a program to implement queue operations (INSERT, DELETE, DISPLAY)

#include<stdio.h>

int front = -1;
int rear = -1; 

void Enqueue(int queue[] , int n , int x){
    if(rear == n-1){
        printf("Queue Overflow!");
        return;
    }
    if(front == -1 &&  rear == -1){
        front = 0;
    }
    rear++;
    queue[rear] = x;
} 

int Dequeue(int queue[]){
    if(front == -1){
        printf("Queue underflow!");
        return -1;
    }
    int d = queue[front];
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        front++;
    }
    
    return d;
}   

void Display(int queue[]){
    if(rear == -1){
        printf("Queue Undeflow!");
        return;
    }
    for(int i = front ; i<=rear ; i++){
        printf("%d ",queue[i]);
    }
}

int main()
{
    int n;
    printf("Enter a size of Queue : ");
    scanf("%d",&n);

    int queue[n];

    while (1)
    {
        int choice;
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);
        
        switch(choice)
        {
        case 1:
            int x;
            printf("Enter a number to Enqueue in queue : ");
            scanf("%d", &x);
            Enqueue(queue , n , x);
            break;

        case 2:
            int DequeueElement = Dequeue(queue);
            if(DequeueElement != -1)
                printf("Dequeued Element : %d",DequeueElement);
            break;

        case 3:
            Display(queue);
            break;

        case 4:
            printf("Program is Terminated!");
            return 0;
            break;

        default:
            printf("Invalid choice!");
            break;
        }
    }

    return 0;
}