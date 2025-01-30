#include<stdio.h>
int main(){
int row,space,star,totalrow;
printf("enter totalnumber of row:");
scanf("%d",&totalrow);
for(row=1;row<=totalrow;row++)
{ for(space=1;space<=totalrow-row;space++){
    printf(" ");
}
 for(star=1;star<=(2*row)-1;star++){
    printf("*");
 }
 printf("\n");

}
for(row=totalrow-1;row>=1;row--){
  for(space=1;space<=totalrow-row;space++){
    printf(" ");
  }
  for(star=1;star<=(2*row)-1;star++){
    printf("*");
  }
  printf("\n");

}


getch();

}
