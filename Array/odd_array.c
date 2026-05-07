#include<stdio.h>
int countodd(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if (arr[i] % 2 != 0){
            count ++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printf("%d", countodd (arr,6));     // 6 is the size of array
    // printf("%d", sizeof(arr) / sizeof(arr[0]));
    return 0;
}

// output: 
//  = 3  > 3 numbers are odd.