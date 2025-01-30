#include<stdio.h>
void fun (){
int a[5],i,ind;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("enter your index");
scanf("%d",&ind);
if (ind>=0&&ind<=4){

    printf("the value of index a[%d] is %d\n",ind,a[ind]);
}


}
int main(){
fun();
return 0;

}
