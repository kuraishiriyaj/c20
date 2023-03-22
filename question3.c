#include<stdio.h>
/* write a function to sort an array of int type
value { void sort*ptr,int size} ?
*/
 void sort (int*p,int size)
 {

    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",*(p+i));
    }
 }


int main()
{
    int a[10]={1,6,3,7,3,9,3,7,1,5};
    // sort(&a,10);

   sort(&a,10);

    return 0;
}
