// Write a program to calculate the power of any number using recursion.

#include<stdio.h>
#include<time.h>

int powerRecursive(int b , int p){
    if(p < 1){
        return 1;
    }
    return b * powerRecursive(b,p-1);
}

int powerIterative(int b , int p){\
    int ans = b;
    for(int i=1 ; i<=p-1 ; i++){
        ans *= b; 
    }
    return ans;
}

int main(){
    int power,base;
    printf("Enter a Base : ");
    scanf("%d",&base);
    printf("Enter a Power : ");
    scanf("%d",&power);

    clock_t start , end;
    start = clock();
    int res = powerRecursive(base,power);
    end = clock();

    printf("%d ^ %d = %d",base,power,res);
    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}

// 6 , 4 -> 1296