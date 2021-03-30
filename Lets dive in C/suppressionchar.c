#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a,b,c:");
    scanf("%d %*d %d",a,b,c);
    printf("The values of a,b,c are:%d %d %d",a,b,c);
}