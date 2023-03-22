#include<stdio.h>
/* write a program to compute the sum of all elements an array using pointers ?
*/
int main()
{
int a[10]={1,7,4,8,4,8,3,5,9,3};
int*p;
p=a;
int i=0;
int sum=0;
for(i=0;i<10;i++)
{
   sum=sum+*(p+i);
}
printf("compute the sum of all elements an arrry is %d",sum);

    return 0;
}
