//find the remainder of three and print it as output
#include<stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
//if condition statement begins
    if(a%3==0){
        printf("Remainder is Zero");
    }
    else if(a%3==1){
        printf("Reaminder is One");
    }
    else{
        printf("Remainder is Two");
    }
}