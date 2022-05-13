#include <stdio.h>
#define print(x,y,z) printf(x,y,z)
int main(){
    float sales_amount;
    printf("Enter sales amount: ");
    scanf("%f",&sales_amount);
    if(sales_amount==5000) printf("\nCommission is NIL\n");
    else if(sales_amount>5000 && sales_amount<=10000) 
        print("Commision for %g is %g",sales_amount,sales_amount*0.02);
    else if(sales_amount>10000)
        print("Commision for %g is %g",sales_amount,sales_amount*0.05);
    return 0;
}