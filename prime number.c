#include<stdio.h>
#include<math.h>
int main(){
int i,n,count=0;
printf("enter any positive number:");
scanf("%d",&n);
if(n<=1){
  count=1;
  }
for(i=2;i<=n/2;i++){
  if(n%i==0){
    count=1;
    break;
  }
}
if(count==0){
    printf("%d is a prime number",n);
}else{
printf("%d is not a prime number",n);

}
getch();



}
