#include <stdio.h>
#include <conio.h>
int main(){
// Program To Determine Whether a Number Is Divisible By Any Number Or Not!
printf("Hello Welcome To Sultan's Divisibility Checker Program!\n\n");
int num, div;
printf("Enter The Main Number U Want To Check Divisiblity:\n");
scanf("%d", &num);
printf("Enter The Number You Want To Check Divisiilty By Above Number:\n");
scanf("%d", &div);
printf("\nYour Provided Values are %d / %d", num,div);
printf("\n\nThe Division Of Your Main Number By Factor Gives: %d", num%div);
printf("\n\nIf 0 Then The Number %d Is Factor and If Not Then %d is Not a Factor Of %d!", div,div,num);
printf("\n\nThank You For Using Our Software Made By Sultan Inam Ullah");
printf("\n\nPress 'S' To Exit");
getch();
return 0;
}