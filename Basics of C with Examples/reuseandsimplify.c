//Task:input 1st number -> prime/not and input 2nd number -> prime/not
#include<stdio.h>
//function isPrime
int isPrime(int a){
    int i;
    for(i=2;i<a-1;i++){
        if(a%i==0){
            return(0); //if the number is not prime returns 0
        }
    }
    return 1;//if the number is prime returns 1
} 
int main()
{
    int a,a_p;
    //1st Input 
    printf("Enter a Number: ");
    scanf("%d",&a);
    a_p = isPrime(a); // function call
    if(a_p==1){
        printf("%d is PRIME",a);
    }
    else{
        printf("%d is NOT a PRIME",a);
    }
    //2nd Input
    printf("\n Enter another Number: ");
    scanf("%d",&a);
    a_p = isPrime(a); // function call
    if(a_p==1){
        printf("%d is PRIME",a);
    }
    else{
        printf("%d is NOT a PRIME",a);
    }
}