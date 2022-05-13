#include <stdio.h>

int main(){
    int n; 
    printf("Enter n value: ");
    scanf("%d",&n);
    int f1=0,f2=1,f;
    if(n>=1) printf("The fibbanocii number are %d ",f1);
    if(n>=2) printf("%d ",f2);
    if(n>2){
        do{
            f=f1+f2;
            f1=f2;
            f2=f;
            printf("%d ",f);
            n--;
        }while(n-2>0);
    }
    return 0;
}