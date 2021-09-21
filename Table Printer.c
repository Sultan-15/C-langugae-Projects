#include <stdio.h>
#include <conio.h>
int main(){
printf("Hello, Welcome To Sultan Inam Ullah's Table Printer\n\n");
int num, i;
printf("Enter The Number You Want To Print The Table Of:\n");
scanf("%d", &num);

for(i = 0; i <= 10; ++i ){
    printf("%d x %d = %d\n", num, i, num*i);
}

getch();
return 0;
}