#include<stdio.h>
/* write a program to calculate the lenght of the string using of the pointer?
*/
int main()
{
char str[]="riyajkuraihi";
char*p;
p=str;
int length=0;
while(*p!='\0')
{
  length++;
  p++;
}
printf("length of the string is %d",length);
return 0;
}
