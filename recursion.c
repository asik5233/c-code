#include<stdio.h>
void display(int num)
{
if(num)
display(num-1);
else
return;
printf("%d\n",num);
}
int main(){
int n;
printf("Enter Limit");
scanf("%d",&n);
display(n);


 return 0;
}
