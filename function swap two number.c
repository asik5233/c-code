#include<stdio.h>
int swap(int a,int b)
{
   return (b,a);
}
int main(){
int n1,n2,temp;
scanf("%d%d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
swap(n1,n2);
printf("%d",n1,n2,temp);
return 0;

}
