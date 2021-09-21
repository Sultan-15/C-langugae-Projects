#include <stdio.h>
#include <conio.h>
int main(){
printf("\n\nHello Welcome To Greatest Of 4 Numbers Finder!\n\n");
int num1, num2, num3, num4;
printf("Enter 1st Number:\n");
scanf("%d", &num1);

printf("Enter 2nd Number:\n");
scanf("%d", &num2);

printf("Enter 3rd Number:\n");
scanf("%d", &num3);

printf("Enter 4th Number:\n");
scanf("%d", &num4);
// num1
if (num1>= num2 && num1>=num3 && num1>=num4)
{
    printf("1st Number %d is The Largest Number!", num1);
}
// num 2
if (num2>= num1 && num2>=num3 && num2>=num4)
{
    printf("2nd Number %d is The Largest Number!", num2);
}
// num 3
if (num3>= num1 && num3>=num2 && num3>=num4)
{
    printf("3rd Number %d is The Largest Number!", num3);
}
// num 4
if (num4>= num2 && num4>=num3 && num4>=num1)
{
    printf("4th Number %d is The Largest Number!", num4);
}

getch();
return 0;
}