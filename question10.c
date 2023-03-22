#include<stdio.h>
#include<string.h>
/* write a program to print a string in reverse using a pointer ?
*/
int main()
{
    char str[]="riyajkuraisi";
    char*p=str;
    int i;
    int length=strlen(str);

    for(i=length-1;i>=0;i--)
    {
        printf("%c",*(i+p));
    }

    return 0;
}