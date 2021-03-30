#include<stdio.h>
int main()
{
    char n[100]; //string n(variable) i.e, <=100
    printf("what is your name?");//printf and scanf are predefined functions
    scanf("%s",n); //scan - read, f - formatter, %s - string 
    printf("Hello,%s",n);
}