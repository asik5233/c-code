#include<stdio.h>
int main(){
int row,space,star,n;
printf("enter total no of row:");
scanf("%d",&n);
for(row=1;row<=n;row++){
    for(space=1;space<=n-row;space++){
        printf(" ");
    }
    for(star=1;star<=(2*row)-1;star++){
     printf("*");
    }
  printf("\n");
}



017






return 0;
}
