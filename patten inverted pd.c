#include<stdio.h>
int main(){
int space,star,row,totalrow;
printf("enter total number of rows");
scanf("%d",&totalrow);
for(row=totalrow;row>=1;row--){
 for(space=1;space<=(totalrow-row);space++){
    printf(" ");
 }
 for(star=1;star<=(2*row)-1;star++){
  printf("*");

 }

 printf("\n");

}




}
