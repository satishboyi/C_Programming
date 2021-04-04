#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100],sen[100],sen1[100];
    printf("Hello, World!\n");
    printf("Enter a string with spaces:");
    scanf("%[^\n]%*c",&s);
/*Here, [] is the scanset character. 
^\n stands for taking input until a newline isn't encountered. 
Then, with this %*c, it reads the newline character and here, 
the used * indicates that this newline character is discarded.
Note: The statement: scanf("%[^\n]%*c", s); will not work because the last 
statement will read a newline character, \n, from the previous line. 
This can be handled in a variety of ways. One way is to use scanf("\n"); before the last statement.
Example1:scanf("%s[A-Z,a-z,_)s",&str);
Example2:scanf("%[^o]s",&str); only prints before o character*/
  	printf("%s\n",&s);
    printf("Enter 3rd String without spaces you can use underscore[_] instead of spaces:");
    scanf("%[A-Z,a-z,_]s",&sen1);
    printf("%s\n",&sen1);
    printf("Enter another string:");
    scanf("%[^e]s",&sen);
    printf("%s\n",&sen);   
    return 0;
}