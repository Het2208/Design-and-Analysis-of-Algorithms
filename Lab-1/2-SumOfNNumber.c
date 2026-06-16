// Write a program to calculate the sum of numbers from 1 to n using recursion.

#include<stdio.h>
#include<time.h>

int sumOfNRecursive(int n){
    if(n < 1){
        return 0;
    }
    return n + sumOfNRecursive(n-1);
}

int sunOfN(int n){
    return n*(n+1) / 2;
}

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    clock_t start , end;
    start = clock();
    int res = sumOfNRecursive(n);
    end = clock();

    printf("Sum from 1 to %d = %d",n,res);
    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}