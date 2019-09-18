#include <stdlib.h>
#include <stdio.h>

int main()
{
    char operation;
    double n1,n2;
	
	printf("[ Calculator ] by Group 04\n\n");
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
    		break;
    	case '2':	//Subtraction
    		
    		break;
    	case '3':	//Multiplication
    		
    		break;
    	case '4':	//Division
    		
    		break;
    	case '5':	//Square Root
    		
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

