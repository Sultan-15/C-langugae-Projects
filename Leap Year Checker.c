#include <stdio.h>
#include <conio.h>
int main(){
int year;
printf("Hello Welcome To Leap Year Finder!\n\n");
printf("Enter The Year You Want To Check Whether Leap Year Or Not!:\n");
scanf("%d", &year);

if (year%400 == 0)
{
    printf("%d is Leap Year!", year);
}
else if (year%100 == 0)
{
    printf("%d is Not Leap Year!", year);
}
else if (year%4 == 0)
{
    printf("%d is a Leap Year!", year);
}
else
{
    printf("%d is Not a Leap Year!", year);
}


getch();
return 0;
}