#include<stdio.h>
/* write a program in c to demonstrate how to handle the pointers
in the program 

*/
int main()
{
 int a;
 int*ptr=&a;
 printf("enter is the number of a\n");
 scanf("%d",&a);
 printf("*ptr :%d\n",*ptr);
 printf("a=%d",a);
    return 0;
}