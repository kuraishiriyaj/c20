#include<stdio.h>
/* write a function to swap values of the two in variables
of calling function ?
*/
int swap(int*a,int*b)
{
    int t;
    t=*a;
    * a=*b;
     *b=t;
}
int main()
{
    int a=5,b=10;
    printf("a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("swap of the two number a=%d,b=%d",a,b);

    return 0;
}