#include<stdio.h>
#include<math.h>
int main()
{
    printf("C Calculator for 2 numbers\n");
    printf("Use Add:A\nSubtract:S\nMultiply:M\nDivide:D \n");
    float num1,num2,add,sub,mul,divd;
    char A,S,M,D;
    char opr;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("\nEnter the second number: ");
    scanf("%f",&num2);
    printf("Enter the operation code: ");
    scanf("%c", &opr);
    // printf("Hello");
    //opr=getchar();
    
    if ( opr == '+' ) {
        add=num1+num2;
        printf("The sum of numbers is: %f",add);
    }
    else if ( opr == '-' ) {
        sub=num1-num2;
        printf("The difference of numbers is: %f",sub);
    }
    else if ( opr == '*' ) {
        mul=num1*num2;
        printf("The product of numbers is: %f",mul);
    }
    else if ( opr == '/' ) {
        divd=num1/num2;
        printf("The quotient of numbers is: %f",divd);
    }
    return 0;
  
}