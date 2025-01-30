#include<stdio.h>
#include<conio.h>
int main(void){
int row,space,star,totalrows;
printf("enter totalrows :");
scanf("%d",&totalrows);
for(row=1;row<=totalrows;row++){
 for(space=1;space<=(totalrows-row);space++){
    printf(" ");
 }
  for(star=1;star<=((2*row)-1);star++){
    printf("*");
  }
 printf("\n");
}

return 0;

}
