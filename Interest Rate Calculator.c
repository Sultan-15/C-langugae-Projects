#include <stdio.h>
#include <conio.h>
int main(){
// Interest Rate Calculator
int principal, rate, years;
printf("Hello! Welcome To Sultan Inam's Interest Rate Calculator\n");
printf("Enter No Of Years You Want To Calculate Interest:\n");
scanf("%d",&years);
printf("Enter The Amount You Want To Calculate Interest:\n");
scanf("%d",&principal);
printf("Enter The Interest Rate You Want To Apply:\n");
scanf("%d",&rate);
int simpleinterest = (principal * rate * years)/100;
printf("Your Entered Time is %d Years, Entered Rate is %d Percent, and Entered Amount is %d Rupees\n\n", years,rate,principal);
printf("The Value Of Simple Interest Rate According To Your Requirements is %d Rupees \n\n", simpleinterest);
int total = simpleinterest + principal;
printf("The Total Amount You Would Have Top Return Is %d\n\n", total);

printf("Thanks For Using Our Interest Rate Calculator\n");
printf("Press Any Key To Exit");

getch();
return 0;
}