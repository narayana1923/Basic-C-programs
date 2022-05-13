#include <stdio.h>

int main(){
    int n,i=2;
    printf("Enter n value: ");
    scanf("%d",&n);
    printf("The prime numbers between 1 to %d are: ",n);
    while(i<n){
        int j=2;
        while(j<i){
            if(i%j==0) break;
            j++;
        }
        if(i==j) printf("%d ",i);
        i++;
    }
    return 0;
}