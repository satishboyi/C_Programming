#include<stdio.h>
#define PI 3.14 // to define a value directrly
int main(){
    int octal = 012, hexadecimal = 0x12;
    const int a=5; // const - It's a keyword used to declare the constant values
    printf("Defined Value is :%f\n",PI);
    printf("Converted Number is :%d\n",octal);// octal to decimal
    printf("Constant Number :%d\n",a);
    printf("Converted Number is :%d\n",hexadecimal);// hexadecimal to decimal
}