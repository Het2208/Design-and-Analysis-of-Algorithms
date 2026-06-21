// Write a program to implement stack operations (PUSH, POP, PEEP, CHANGE & DISPLAY)

#include <Stdio.h>

int top = -1;

void Push(int stack[] , int n , int x ){
    if(top >= n-1){
        printf("Stack Overflow!");
        return;
    }
    top++;
    stack[top] = x;
    return;
}

int Pop(int stack[]){
    if(top < 0){
        printf("Stack underflow");
        return 1;
    }
    top--;
    return stack[top-1];
}

int Peep(int stack[] , int i){
    if((top-i+1) < 0){
        printf("Stack underflow!");
        return 1;
    }
    return (stack[top-i+1]);
}

void Change(int stack[] , int i , int x){
    if((top-i+1) < 0){
        printf("Stack underflow!");
        return;
    }
    stack[top-i+1] = x;
}

void Display(int stack[]){
    if(top < 0){
        printf("Stack underflow!");
        return;
    }
    for(int i=top  ; i>=0 ; i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a size of stack : ");
    scanf("%d",&n);

    int stack[n];

    while (1)
    {
        int choice;
        printf("\n1. Push\n2. Pop\n3. Peep\n4. Change\n5. Display\n6. Exit\n");
        scanf("%d", &choice);
        
        switch(choice)
        {
        case 1:
            int x;
            printf("Enter a number to push in stack : ");
            scanf("%d", &x);
            Push(stack , n , x);
            break;

        case 2:
            int popElement = Pop(stack);
            printf("Poped Element : %d",popElement);
            break;

        case 3:
            int pos;
            printf("Enter a position : ");
            scanf("%d", &pos);
            int peepElement = Peep(stack , pos);
            printf("Peeped element : %d",peepElement);
            break;

        case 4:
            int position;
            int xy;
            printf("Enter a position : ");
            scanf("%d", &position);
            printf("Enter a number to change at position -> %d : ", position);
            scanf("%d", &xy);
            Change(stack,pos,xy);
            break;

        case 5:
            Display(stack);
            break;

        case 6:
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