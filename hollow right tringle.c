#include<stdio.h>
#include<conio.h>
int main(){
int row,col,totalrow;
printf("enter total number of row:");
scanf("%d",&totalrow);
for(row=1;row<=totalrow;row++){
    for(col=1;col<=row;col++){
       if(col==1 || row==totalrow || row==col){
       printf("*");
    }else{
    printf(" ");
    }
    }
printf("\n");
}


getch();
return 0;



}
