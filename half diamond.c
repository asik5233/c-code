#include<stdio.h>
int main(){
int row,star,totalrow;
printf("enter total number of row:");
scanf("%d",&totalrow);
for(row=1;row<=totalrow;row++){
  for(star=1;star<=row;star++){
    printf("*");
  }

printf("\n");
}
for(row=totalrow-1;row>=1;row--){

  for(star=1;star<=row;star++){
    printf("*");
  }

printf("\n");
}
















getch();

}
