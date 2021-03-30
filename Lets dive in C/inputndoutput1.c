#include<stdio.h>
int main()
{
    char ch = 'a'; // single char is placed in the single quotes
    char str[10] = "abcdef"; //string must be placed in the double quotes
    float real = 12.34;
    int number = 100;
    double dbl = 12.345678;
    printf("Character:%c\n",ch); // %c - to print character
    printf("Character as Integer:%d\n,ch"); // gives ASCII value in the o/p(converts char to int)
    printf("String:%s\n",str); // %s - to print string
    printf("'Float:%f\n",real); // %f - to print float
    printf("double:%lf\n",dbl); // %lf - to print double
    printf("Scientific\(e\):%e\n",dbl); // %e - to print scientifiv values
    printf("Scientific\(E\):%E\n",dbl);
    printf("Integer:%d\n",number); // %d - to print integers(decimal numbers) 
    printf("Octal_Number:%o\n",number); // %o - to print octal number & add (0) at front of o/p (converts decimal to octal)
    printf("Hexadecimal_Number:%x\n",number); // %x - to print hexadecimal numbers & add (0x) at front of o/p (converts decimal to hexadecimal)
    printf("Hexadecimal:%x\t String:%s\t Float:%f\n",number,str,real); // combined o/p and \t - tab space
//h : small => d,i,o,u,x
//l : large => f,e,g
//multiple input and output in a single line
    printf("\nEnter number,real,str:");
    scanf("%d %f %s",&number,&real,str);
    printf("%d\t%f\t%s\n",number,real,str);
//multiple input and output in a single line
    int day,month,year,age;
    printf("Enter day-month-year :");
    scanf("%d-%d-%d",&day,&month,&year);
    printf("Enter age :");
    scanf("%d",age);
    printf("DOB:%d-%d-%d\n",day,month,year); // \/ - used to print front slash(/)
    printf("Age:%d\n",age);
}
