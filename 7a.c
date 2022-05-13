// Write a Program to calculate the sum of n numbers entered by the user using
// dynamic memory allocation functions
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n;
    int sum=0;
    printf("Enter count of numbers: ");
    scanf("%d",&n);
    arr=(int*) malloc(sizeof(int)*n);
    printf("Enter numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum is %d",sum);

    free(arr);
}