#include<stdio.h>
int main(){
int array[7],i,sum=0;
printf("enter array:");
for(i=0;i<7;i++){
    scanf("%d",&array[i]);
}
for(i=0;i<7;i++){
    sum=sum+array[i];
}
printf("sum of array:%d\n",sum);
return 0;





}
