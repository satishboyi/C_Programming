//find the given number is prime number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    int i;
    printf("Enter a Number:");
    scanf("%d",&a);
 //for loop starts from here
    for(i=2;i<=a-1;i++)
    {
        if(a%i==0)
        {
            printf("Not Prime, divisible by %d",i);
            exit(0);//exit from the whole program
        }
    }
    printf("PRIME");
}