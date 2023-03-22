#include<stdio.h>
/*
   write a function to swap strings of two char array of calling function ?
*/
void swap(char**str1,char**str2)
{
  
    char*temp;
    temp=*str1;
    *str1=*str2;
    *str2=temp;
  printf("str1=%s,str2=%s",*str1,*str2);
}
int main()
{
  char *str1="riyaj";
  char *str2="kuraishi";
  printf("before swaping string is:\n");
  printf("str1 %s\n",str1);
  printf("str2=%s\n",str2);
  swap(&str1,&str2);
  printf("after swaping of strigs:\n");
    return 0;
}
