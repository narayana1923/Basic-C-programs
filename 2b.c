#include <stdio.h>

int main(){
    int num,sum=0;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    for(;num>0;sum+=num%10,num/=10);
    printf("%d",sum);
    return 0;
}