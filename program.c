#include<stdio.h>

int main()
{
    float cel, fer;
    printf(" Enter a Celsius number :");
    scanf("%f",&cel);

    fer= (9*cel)/5 + 32;
    printf(" Fehrenheit = %.2f",fer);

}
