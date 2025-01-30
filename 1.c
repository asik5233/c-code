#include<stdio.h>
int main(){
int rows,cols,trows,tcols;
printf("enter total rows and cols:");
scanf("%d%d",&trows,&tcols);
for(rows=1;rows<=trows;rows++){
 for(cols=1;cols<=tcols;cols++){
    printf("*");
 }
 printf("\n");
}
return 0;

}
