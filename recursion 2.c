#include <stdio.h>
void display(int i,int n){
if(i<n){
    printf("%d",i);
display(i+1,n); }

}


int main(){
int i=1,n;
printf("enter limit:");
scanf("%d",&n);
display(i,n);

printf("%d", n);

return 0;

}
