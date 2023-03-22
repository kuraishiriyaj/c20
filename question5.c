#include<stdio.h>
/* write a program to find the maximum number between two numbers
using a pointer  ?
*/
int main()
{

int a=6;
int b=8;
int*p=&a;
int*q=&b;
*p=(*p>*q)?*p:*q;
printf("maximum number is %d",*p);
    return 0;
}