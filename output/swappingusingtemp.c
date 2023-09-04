#include<stdio.h>
int main()
{
    int a,b,c;
    a=10;
    b=20;

    printf("\nThe value of a and b before swapping is %d and %d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nthe value of a and b is: %d and %d",a,b);

    return 0;
}