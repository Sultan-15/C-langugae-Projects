// Income Tax Calculator
#include <stdio.h>
#include <conio.h>
int main(){
float tax, pay;
printf("Hello Welcome To Income Tax Calcualtor Based On Income Slabs!\n\n");
printf("Enter Your Yearly Income In Rupees:\n");
scanf("%f", &pay);

if (pay< 250000)
{
    tax = 0;
    printf("The Tax Is %f", tax);
}

if (pay >= 250000 && pay<=500000){
    tax = tax+ 0.05 * (pay - 250000);
    printf("The Tax You Have To Pay is 5%% Of Your Income is %f", tax);
}
if (pay >= 500000 && pay <=1000000){
    tax = tax+ 0.20 * (pay - 500000);
    printf("The Tax You Have To Pay is 20%% Of Your Income is %f", tax);
}
if (pay > 1000000){
    tax = tax+ 0.30 * (pay - 1000000);
    printf("The Tax You Have To Pay is 30%% Of Your Income is %f", tax);
}

getch();
return 0;
}