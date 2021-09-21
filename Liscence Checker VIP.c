#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
printf("Hello! Welcome To Sultan's Liscence Age Verifier!\n\n");    
    int age, b;
    char vip;
printf("Press 'Y' If You Have VIP Pass & Press 'N' If You Don't Have VIP Pass:\n");
    scanf("%c", &vip);

if ( vip == 'Y')
{
b = 1;
}
    
else
{
b = 0;
}

printf("Enter Your Age To Check For Driving Liscence:\n");
scanf("%d", &age);

if (vip == 'Y')
{
printf("Your Age Does Not Meet The Legal Criteria But As You Have VIP Pass \n");
}

else
{
 printf("Your Age Doesnot Meet Legal Criteria  \nYou Don't Have Vip Pass Too, So \n");   
}

if (age<=80 && age>=18 || b == 1) // "||" is Used To Set A Complete New Condition
{
    printf("You are Eligible To Drive & Can Have a Liscense\n \n Minimum Legal Age = 18 \n Maximum Legal Age = 80 \n");
}
else
{
    printf("Sorry You Cannot Drive! \n \n Minimum Legal Age = 18 \n Maximum Legal Age = 80 \n");
}
printf("\n\nPress 'S' To Exit");
getch();
return 0;
}