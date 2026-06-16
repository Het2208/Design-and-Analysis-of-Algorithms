// Write a recursive program for calculation of factorial of an integer.

#include <stdio.h>
#include <time.h>

long long FactorialRecursive(int n){
    if (n == 1){
        return 1;
    }
    return n * FactorialRecursive(n-1);
}

long long Factorial(int n){
    int fact = 1;
    for(int i=1 ; i<=n ; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);

    clock_t start , end;
    start = clock();
    long long ans = FactorialRecursive(n);
    end = clock();

    printf("Factorial of %d = %lld",n,ans);
    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}