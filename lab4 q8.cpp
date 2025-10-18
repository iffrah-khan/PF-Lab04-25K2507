#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;
	char Operator;
	
	printf(" Enter first number: ");
	scanf("%d", &num1);
	printf("\n Enter second number: ");
	scanf("%d", &num2);
	printf("\n Select an operator (+, -, *, /, %%, ^): ");
	scanf(" %c", &Operator);
	
	switch (Operator) {
		case '+': printf("\n Addition of %d and %d is: %d",num1,num2,num1+num2);
		break;
		
		case '-': printf("\n Subtraction of %d from %d is: %d",num1,num2,num1-num2);
		break;
		
		case '*': printf("\n Multiplication of %d and %d is: %d",num1,num2,num1*num2);
		break;
		
		case '/': if(num2==0) {
			printf("\n Division by zero is not possible");
		}
		else {
			printf("\n Division of %d by %d is: %d",num1,num2,num1/num2);
		}
		break;
		
		case '%': if(num2==0) {
			printf("\n Modulus by zero is not possible");
		}
		else {
			printf("\n Remainder of %d from %d is: %d",num1,num2,num1%num2);
		}
		break;
		
		case '^': printf("\n %d raised to the power %d is: %.0f",num1,num2,pow(num1,num2));
		break;
		default: printf("\n You entered an incorrect operation");
	}
	return 0;
}

