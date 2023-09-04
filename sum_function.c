#include<Stdio.h>
int main(){
    int a;
    int b;
    int sum;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    sum=as(a,b);
    printf("\n%d is Sum",sum);
    return 0;
}
int add(int a,int b){
    return a+b;
}
int as(int a,int b){
    return a*b;
}
