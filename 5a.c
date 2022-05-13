#include <stdio.h>
typedef long int lli;
lli fact(lli n){
    if(n>1) return n*fact(n-1);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The factorial of %d is %ld",num,fact(num));
    return 0;
}