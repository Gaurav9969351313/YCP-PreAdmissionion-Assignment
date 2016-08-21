#include<stdio.h>
#include<conio.h>
int main()
{
 float fh,cl;
 printf("Enter temperature value in Fahrenheit: ");
 scanf("%f", &fh);
 cl = (fh - 32) / 1.8;
 printf("Converted Celsius value: %f",cl);
 getch();
 return 0;
}
