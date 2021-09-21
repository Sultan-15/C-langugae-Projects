#include <stdio.h>
#include <conio.h>
int main(){
printf("Hello! Welcome to Circle Area Calculator:\n");
float pi=3.14, radius;
printf("Enter The Radius Of The Circle You Want To Calculate Area Of:\n");
scanf("%f", &radius);
float area = ("%f", pi*radius*radius);
printf("The Area Of Circle Is %f metersquare\n", area);
printf("Press any Key To Exit");
getch();
return 0;
}
