// Write a program to print Fibonacci series for n number using recursion.


#include<stdio.h>
#include<time.h>

int FibonacciRecursive(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    return FibonacciRecursive(n-1) + FibonacciRecursive(n-2);
}

void FibonacciIterative(int n){
    int a = 0;
    int b = 1;

    for(int i=0 ; i<n ; i++){
        int c = a + b;
        printf("%d ",a);
        a = b;
        b = c;
    }
}

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    clock_t start , end;
    start = clock();
    end = clock();

    for(int i=0 ; i<n ; i++){
        printf("%d ",FibonacciRecursive(i));
    }

    // FibonacciIterative(n);

    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}