#include <stdio.h>
void call_by_value(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void call_by_reference(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void print(char *arr,int a,int b){
    printf("\n%s a and b are %d and %d",arr,a,b);
}
int main(){
    int a,b;
    printf("Enter a and b values: ");
    scanf("%d %d",&a,&b);
    print("Before swaapping using call by value",a,b);
    call_by_value(a,b);
    print("After swapping using call by value",a,b);
    printf("\n");
    print("Before swapping using call by reference",a,b);
    call_by_reference(&a,&b);
    print("After swapping using call by reference",a,b);
    return 0;
}