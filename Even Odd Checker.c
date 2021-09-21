#include <stdio.h>
#include <conio.h>
int main(){
printf("Hello Welcome To Sultan Inam's Even/Odd Number Checker\n");
int num;
printf("Enter Any Number You Want To Check:\n");
scanf("%d", &num);

if (num % 2 == 0)
{
    printf("The Number %d is Even", num);
}

else
{
    printf("The Number %d is Odd", num);
}


getch();
return 0;
}