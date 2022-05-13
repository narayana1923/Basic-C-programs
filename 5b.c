#include<stdio.h>
#include <string.h>

int palindrome(char str[]){
    // int n=strlen(str);
    // for(int i=0;i<n/2;i++){
    //     if(str[i]!=str[n-i-1]) return -1;
    // }
    // return 1;
    char str1[100];
    strcpy(str1,str);
    return (strcmp(str,strrev(str1))==0)? 1:-1;
}

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    printf("%s is %s",str,(palindrome(str)==1)?"palindrome":"not palindrome");
    return 0;
}