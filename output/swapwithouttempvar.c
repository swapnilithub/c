#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;

    printf("\nThe value of a and b before swapping is %d and %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe value of a and b is: %d and %d",a,b);

}