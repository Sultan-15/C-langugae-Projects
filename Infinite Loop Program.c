#include <stdio.h>
#include <conio.h>
int main(){
int num, i;
printf("Enter The Number You Want To Print Values:\n");
scanf("%d", &num);

for (i = 10; i >=1; i--)
{
    printf("%d x %d = %d\n", num, i, num*i);
}



getch();
return 0;
}