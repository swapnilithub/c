#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:printf("You pressed one");
        break;
    case 2:printf("you pressed two");
         break;
    default:
        break;
        }
    return 0;
}