#include<stdio.h>
int main()
{
int marks[10]={23,98,87,36,54,22,25,90,74,21};
for(int i=0;i<=9;i++){
printf("\n%d",&marks[i]);
if(marks[i]<=35){
printf("\n%d",i);
}
}

return 0;
}
