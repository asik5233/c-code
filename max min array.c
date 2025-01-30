#include<stdio.h>
int main(){
int array[5],i,max,min;
max=array[0];
printf("enter array:");
for(i=0;i<5;i++){
    scanf("%d",&array[i]);
}
for(i=1;i<5;i++){
  if(array[i]>max)
        max=array[i];


}
printf("max array:%d",max);
return 0;





}
