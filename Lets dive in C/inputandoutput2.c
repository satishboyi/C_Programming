#include<stdio.h>
int main(){
    int a,b,e,f;
    float c,d,g,h;
    char str[10],str1[10],str2[10];
//for integers (scanf)
    printf("Enter a,b :");
    scanf("%2d %3d",&a,&b); // %nd - we can get atmost n digits as o/p
    printf("The values of a,b are:%d %d\n",a,b);
//for integers (printf)
    printf("Enter e,f :");
    scanf("%d %d",&e,&f);
    printf("The values of e,f are:%4d %3d\n",e,f); // %nd - there should be min n digits in o/p if there's no min then blank spoces are left
//for floating point numbers (scanf)
    printf("Enter c,d :");
    scanf("%4f %7f",&c,&d); // %nf - format (we can get atmost n digits in i/p)
    printf("The values of c,d are:%f %f\n",c,d); 
//for floating point numbers (printf)
    printf("Enter g,h :");
    scanf("%f %f",&g,&h); 
    printf("The values of g,h are:%4.1f %7.2f\n",g,h); // %n.mf - n-min no.of digits that should be enter & m is max no.of digits after decimal point
// for strings (scanf)
    printf("Enter 1st String:");
    scanf("%3s",str); // %ns - we can get atmost n characters in o/p
    printf("The o/p is:%s\n",str);
//for strings (printf)
    printf("Enter 2nd String:");
    scanf("%s",str1);
    printf("The o/p is:%5s\n",str1); //%ns - there should be min n digits in o/p if there's no min then blank spoces are left
//for strings (printf)
    printf("Enter 3rd String:");
    scanf("%s",str2);
    printf("The o/p is:%8.3s\n",str2); //n.ms - n-min no.of characters that should be entered & m is max no.of characters after decimal point is printed in o/p  
}