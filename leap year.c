#include<stdio.h>
int main(){
int year;
scanf("%d",&year);
if((year%4==0)&&(year%100!=0)||(year%400==0)){
    printf("lear year %d",year);

}
else{
    printf("not leap year");
}
getch();

}
