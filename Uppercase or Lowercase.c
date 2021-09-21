#include <stdio.h>
#include <conio.h>
int main(){
// 97 - 122 = a - z (Lowercase) ASCII VALUES
// 65 - 90 = A - Z  (Uppercase) ASCII VALUES
char ch, newch = 240;
printf("%c\n", newch);
printf("Enter Any Character:\n");
scanf("%c", &ch);

if (ch<=122 && ch>=97)
{
    printf("It is Lowercase Character!");
}
if (ch>=65 && ch<=90)
{
    printf("It is a UpperCase Letter!");
}
else
{
    printf("This is Neither Uppercase Nor Lowecase!");
}

getch();
return 0;
}