#include <stdio.h>
#include <conio.h>
int main(){
int comp, eng, urdu, sum;
float percent, up, ep, cp;
// Getting Marks
printf("Enter Your Obtained Marks In Computer Out Of 100:\n");
scanf("%d", &comp);

printf("Enter Your Obtained Marks In English Out Of 100:\n");
scanf("%d", &eng);

printf("Enter Your Obtained Marks In Urdu Out Of 100;\n");
scanf("%d", &urdu);

// Making Total Percentage
sum = (comp + eng + urdu);
percent = sum*100/300;

// Subject Percentage
up = urdu*100/100;
ep = eng*100/100;
cp = comp*100/100;

if(percent > 40 || up > 33 || cp > 33 || ep > 33)
{
    printf("Congratulations\nYou Have Passed The Exam With %f%% Percentage\n\n", percent);
    printf("Your Marks Are As Follow:\n\n");
    printf("English Marks: %d & Percentage %f\n\n", eng, ep);
    printf("Urdu Marks: %d & Percentage %f\n\n", urdu, up);
    printf("Computer Marks: %d & Percentage %f\n\n", comp, cp);
    printf("Your Total Marks are %d\n", sum);
    printf("Your Total Percentage Is %f", percent);
}

else
{
    printf("You Have Failed The Exam By %f%% Percentage\n", percent);
    printf("Your Marks Are As Follow:\n\n");
    printf("English Marks: %d & Percentage %f\n\n", eng, ep);
    printf("Urdu Marks: %d & Percentage %f\n\n", urdu, up);
    printf("Computer Marks: %d & Percentage %f\n\n", comp, cp);
    printf("Your Total Marks are %d\n", sum);
    printf("Your Total Percentage Is %f", percent);
}

getch();
return 0;
}