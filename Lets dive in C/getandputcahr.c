#include<stdio.h>
int main(){
    char c;
    printf("Enter a Character:");
    c = getchar(); // used instead of scanf(). we can also use putchar(c);
    printf("%c\n",c);
}