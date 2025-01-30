#include<stdio.h>
#include<math.h>
int main(){
int i,n,count=0,totalPrimeNb=0,sum=0;
//printf("enter any positive number:");
//scanf("%d",&n);
for(n=1;n<=100;n++){
count=0;
if(n<=1){
  count=1;
  }else{
for(i=2;i<=n/2;i++){
  if(n%i==0){
    count=1;
    break;
  }
 }
}
if(count==0){
    printf("%d\t",n);
  totalPrimeNb++;
  sum=sum+n;
 }
}
printf("\ntotal prime numbers:%d\n",totalPrimeNb);
printf("\ntotal sum of prime numbers:%d\n",sum);
getch();



}
