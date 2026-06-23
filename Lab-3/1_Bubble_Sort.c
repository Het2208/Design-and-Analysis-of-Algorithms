#include<stdio.h>
#include<time.h>
#define SIZE 10000

void buuble_Sort(int arr[] , int n){
    
    for(int i=0 ; i<n-1 ; i++){
        int exchs = 0;
        int temp;
        for(int j=0 ; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                exchs = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(exchs == 0){
            break;
        }
    }

    // return 1;
}

int main(){
    int n  = SIZE;
    clock_t  start , end;
    FILE *f1;
   

    f1 = fopen("Aeverage.txt","r");

    // if(f1 == NULL){
    //     return 1;
    // }

    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        fscanf(f1 ,"%d", &arr[i]);
    }


    printf("worst Case Senario : ");
    start = clock();
    buuble_Sort(arr,n);
    end = clock();

    fclose(f1);

    
    for(int i=0 ; i<n ; i++){
        printf("%d \n",arr[i]);

    }
    printf("\nExecution Time = %lf" , (double)(end - start)/CLOCKS_PER_SEC);

    return 0;
}
