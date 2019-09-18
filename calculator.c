#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double GetNumber();

int main()
{
    char operation;
    double n1,n2;

    printf("[ Calculator ] by Group 09\n\n");
    printf("[1] Addition of two numbers\n");
    printf("[2] Subtraction of two numbers\n");
    printf("[3] Multiplication of two numbers\n");
    printf("[4] Division of two numbers\n");
    printf("[5] Square Root of a number\n");
    printf("[6] Number raised to a Power\n");
    printf("[7] Modulus of two numbers\n\n");
    printf("Choose an operation (1-7): ");
    scanf("%c", &operation);
    
    switch(operation)
    {
    	case '1':	//Addition
			printf("\nEnter first number: ");
			n1 = GetNumber();
    		printf("\nEnter second number: ");
			n2 = GetNumber();
    		printf("\n%.1lf + %.1lf = %.1lf",n1, n2, n1 + n2);
    		break;
    	case '2':	//Subtraction
    		printf("\nEnter first number: ");
			n1 = GetNumber();
    		printf("\nEnter second number: ");
			n2 = GetNumber();
    		printf("\n%.2f - %.2f = %.2f",n1, n2, n1 - n2);
    		break;
    	case '3':	//Multiplication
    		printf("\nEnter first number: ");
			n1 = GetNumber();
			printf("\nEnter second number: ");
			n2 = GetNumber();
			printf("\n%.2f * %.2f = %.2f", n1, n2, n1 * n2);
    		break;
    	case '4':	//Division
    		printf("\nEnter first number: ");
			n1 = GetNumber();
			printf("\nEnter second number: ");
			n2 = GetNumber();
			printf("\n%.2f / %.2f = %.2f", n1, n2, n1 / n2);
    		break;
    	case '5':	//Square Root
    		printf("\nEnter first number: ");
			n1 = GetNumber();
			printf("\nsqrt( %.2f ) = %.2f", n1, sqrt(n1));
    		break;
    	case '6':	//Power
    		
    		break;
    	case '7':	//Modulo
    		
    		break;
    	default:	//Invalid input
    		printf("The operation you have chosen does not exist!");
    		break;		
	}
  return 0;
}

double GetNumber()
{
	double number;
	if (scanf("%lf",&number) != 1)
	{
		printf("Invalid input! Program terminated.");
		exit(0);
	}
	else
		return number;
}
