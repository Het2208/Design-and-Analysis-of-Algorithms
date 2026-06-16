// Write a program to count the digits of a given number using recursion.

#include<stdio.h>
#include<time.h>

int countOfDigitRecursive(int n){
    if(n < 1){
        return 0;
    }
    int count = 0;
    count++;
    return count + countOfDigitRecursive(n/10);
}

int countOfDigit(int n){
    int count = 0;
    while(n != 0){
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    clock_t start , end;
    start = clock();
    int res = countOfDigitRecursive(n);
    end = clock();

    printf("Digit of %d = %d",n,res);
    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}