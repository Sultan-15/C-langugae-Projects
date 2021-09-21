#include <stdio.h>
#include <math.h>
int main(){
// There are 3 Types Of Instructions.
// 1-Type Declaration Instruction
int a = 15;
float b = 1.5;
float f = 3.1;
char c = 'S';

// For Storing a String Use This Method
char name[] = {'S','U','L','T','A','N',' ','I','N','A','M','\0'}; // String

printf ("The Name Of Prime Minister Is %s\n", name);
printf("The Value Of A is %d\n",a);
printf("The Value Of B is %f\n",b);
printf("The Value Of C is %c\n",c);

// 2- Arithematic Instructions
int d = 4; // Here 'd' and 'e' are called 'Operands' can be Float, Integar etc
int e = 8; // & '+', '-', '*','/' symbols are called 'Operators'
printf("The Value Of d + e is %d\n", d + e);
printf("The Value Of d - e is %d\n", d - e);
printf("The Value Of d * e is %d\n", d * e);
printf("The Value Of d / e is %d\n", d / e);

// Modular Divison Operator '%' Shows Remainder, Not Use With Float, Numerator Sign
printf("5 When Divided By 2 Leaves the Remainder %d\n", 5%2);
//For Raising To The Power Use <math.h> header and 'pow()' function!
printf("The Value Of 2 Raised to The Power 2 is %f", pow(2, 2)); // Must Be Float %f


// Arithematic Operations Between Types

// ADDITION
// Between Int --> Int = Int
printf("\nThe Sum Of D + E is %d", d + e); // d = 4 and e = 8
// Between Int --> Float = Float
printf("\nThe Sum Of D + E is %f", d + b); // d = 4 and b = 1.5
// Between Float --> Float = Float
printf("\nThe Sum Of D + E is %f", b + f); // b = 1.5 and f = 3.1

//SUBTRACTION
// Between Int --> Int = Int
printf("\nThe Difference Of D + E is %d", d - e); // d = 4 and e = 8
// Between Int --> Float = Float
printf("\nThe Difference Of D + E is %f", d - b); // d = 4 and b = 1.5
// Between Float --> Float = Float
printf("\nThe Difference Of D + E is %f", b - f); // b = 1.5 and f = 3.1

// DIVISION
// Between Int --> Int = Int
printf("\nThe Division Between D and E gives %d", d - e); // d = 4 and e = 8
// Between Int --> Float = Float
printf("\nThe Division Between D and E gives %f", d - b); // d = 4 and b = 1.5
// Between Float --> Float = Float
printf("\nThe Division Between D and E gives %f", b - f); // b = 1.5 and f = 3.1

// MULTIPLICATION
// Between Int --> Int = Int
printf("\nThe Product Of D * E is %d", d - e); // d = 4 and e = 8
// Between Int --> Float = Float
printf("\nThe Product Of D * E is %f", d - b); // d = 4 and b = 1.5
// Between Float --> Float = Float
printf("\nThe Product Of D * E is %f", b - f); // b = 1.5 and f = 3.1

/*
CASES NOTE: If You assign
int a = 1.5(which is a float number), The Compiler will demote 1.5 to 1 because int can't store floats!
float b = 15(which is integar), The Compiler will Promote 15 to 15.000000 beacuse float is in decimals!

*/


return 0;
}