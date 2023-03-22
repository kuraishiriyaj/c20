#include<stdio.h>
/* write a program to print the elemnts of an array 
in reverse order using pointer ?
*/
int main()
{

    int a[10]={5,7,4,7,4,7,2,7,9,10};
    int*p;
    p=a;
   int i;
     for(i=9;i>=0;i++)
     {
        printf("%d\n",*(a+i));
     }




    return 0;
}
