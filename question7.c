#include<stdio.h>
/* write a program to count the numberof vowels and constants in a 
string  using a pointer ?
*/
int main()
{
 char str[]="riyajkuraishiisking";
int i;
 int vowels=0,constant=0;
 char*ptr;
 ptr=str;
 for(i=0;str[i]!='\0';i++)
 {
 if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
 {
    vowels++;
 }
 else
 {
   constant++;
 }
 }
 printf("vowels=%d,constant=%d",vowels,constant);
 
    return 0;
}