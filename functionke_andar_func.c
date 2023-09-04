#include<stdio.h>
void india(){
    printf("Chandrayan is on moon");
    return;
}
void america(){
india();
printf("\nfweefowiejf");
return;
}
void nz(){
    printf("fweefowiejf");
    america();
    return;
}
int main(){
    nz();
    return 0;
}