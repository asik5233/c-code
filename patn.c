#include<stdio.h>
int main(){
int a[5],i,j,sum=0;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++){

    if(a[i]%2==0){

        sum+=a[i];
    }
}
printf(" even sum %d",sum);

return 0;

}









