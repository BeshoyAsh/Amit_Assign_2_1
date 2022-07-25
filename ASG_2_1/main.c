#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator_sign;
    float number_1,number_2,sum,sub,mult,dev;

    //First number
    printf("Please enter first number:");
    scanf("%f",&number_1);

    // operation ( i put it here for + point)
    printf("\nPlease enter the operator:");
    scanf("%s",&operator_sign);

    // Second number
    printf("\nPlease enter second number:");
    scanf("%f",&number_2);

    // our calculator using switch method
     switch(operator_sign)
     {
    case '+':
            sum=number_1+number_2;
            printf("\nsum of the two numbers is: %.1f",sum);
            break;
    case '-':
            sub=number_1-number_2;
            printf("\nsubtraction of the two numbers is: %.1f",sub);
            break;
    case '*':
        mult=number_1*number_2;
        printf("\nmultiplication of the two numbers is: %.1f",mult);
        break;
    case '/':
        dev=number_1/number_2;
        printf("\nmultiplication of the two numbers is: %.1f",dev);
        break;
    default:
        printf("wrong operator");
        break;

     }



    return 0;
}
