//Write a Program to find whether a given number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);// & - ampersand(used as address for a i.e, shows the a location in the main memory)
//conditional statement begins
    if(a%2==0){ // % - modulo operator returns remainder
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}