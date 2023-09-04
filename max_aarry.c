#include<stdio.h>
int main()
{
int arr[4]={3,12,22,45};
int max=-1;
for(int i=0;i<=3;i++){
if(max<arr[i]){
max=arr[i];
}
printf("%d",max);

}
return 0;}
