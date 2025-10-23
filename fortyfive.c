//Write a ‘C’ program to convert degree Celsius to degree Fahrenheit.
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &c);
    f = (c*(9.0/5.0)+ 32);
    printf("Temperature in Fahrenheit is: %.2f", f);
    return 0;
}