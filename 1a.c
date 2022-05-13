#include <stdio.h>
#include <math.h>

int main(){
    float a,b,x,y,k,t;
    printf("Enter a,b,x,y,k,t values: ");
    scanf("%f %f %f %f %f %f",&a,&b,&x,&y,&k,&t);
    float exp1=(a*x+b)/(a*x-b);
    float exp2=2.5*log(x)+cos(32)+fabs(pow(x,2)+pow(y,2))+2*x*y;
    float exp3=pow(x,5)+10*pow(x,4)+8*pow(x,3)+4*x+2;
    float exp4=a*exp(k*t);
    printf("%g %g %g %e",exp1,exp2,exp3,exp4);
    return 0;
}