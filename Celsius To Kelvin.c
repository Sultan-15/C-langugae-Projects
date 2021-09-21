#include <stdio.h>
#include <conio.h>
main(){
printf("Hi, Welcome To Celsius To Fahrenheit Converter\n");
float celsius;
printf("Enter Temperature In Celsius:\n");
scanf("%f",&celsius);
float fht = (celsius*9/5) +32;
printf("The Temperature In Fahrenheit Is %f Fahrenheit", fht);
printf("\nThank You For Using Our Temperature Converter!");
printf("\nPress Any Key To Exit!");
getch();
return 0;
}