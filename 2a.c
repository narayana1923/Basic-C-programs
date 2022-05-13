#include <stdio.h>

int main(){
    int grace_marks=0,class,sfail;
    printf("Enter class obtained and number of subjects failed: ");
    scanf("%d %d",&class,&sfail);
    switch (class)
    {
    case 1:
        if(sfail<=3) grace_marks=5;
        break;
    case 2:
        if(sfail<=2) grace_marks=4;
        break;
    case 3:
        if(sfail<=1) grace_marks=5;
        break;
    default:
    printf("\nInvalid class\n");
        break;
    }
    if(grace_marks==0 && (class>0 && class<4 )) printf("\nNo grace marks\n");
    else if(grace_marks!=0) printf("Grace marks obtained is %d",grace_marks);
    return 0;
}