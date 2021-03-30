#include<stdio.h>
int main()
{
    int a; //declaration of variable
    int b,c,d; //declaring multiple variables in a single line
    int e=1; //declaring and initializing in the same line
    int f=2,g=3; //declaring and initializing multiple variables in the same line
    a=5; //initialization of variable
    a=6; //override the previous assigned value and updating the new value
    b=7,c=8,d=9; //initializing multiple variables in a single line
    printf("%d\n",a);
    printf("%d %d %d\n",b,c,d);
    printf("%d\n",e);
    printf("%d %d\n",f,g);
}