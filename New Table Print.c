#include <stdio.h>
#include <conio.h>
int main(){
printf("Hello Welcome To Sultan Inam's Table Printer\n\n");
int num,i;
printf("Enter The Number You Want To Print The Table Of:\n");
scanf("%d", &num);
printf("The Table Of %d Is:\n", num);
for (i = 1; i <= 10; ++i)                                     // for (i = 1; i <= 10; ++i) {
{                                                            //     printf("%d * %d = %d \n", n, i, n * i);
printf("%d x %d = %d\n", num , i , num * i);

}

printf("Press 'S' Key To Exit");
getch();
return 0;
}
