#include<stdio.h>
int main()
{
	int num1,num2;
	char operation;
	
	printf(" Enter first number: ");
	scanf("%d", &num1);
	printf("\n Enter second number: ");
	scanf("%d", &num2);
	printf("\n Select an operation to perform (+, -, *, /): ");
	scanf(" %c", &operation);
	
	switch (operation) {
		case '+': printf("\n Sum of %d and %d is: %d",num1,num2,num1+num2);
		break;
		case '-': printf("\n Difference of %d and %d is: %d",num1,num2,num1-num2);
		break;
		case '*': printf("\n Product of %d and %d is: %d",num1,num2,num1*num2);
		break;
		case '/': if(num2==0) {
			printf("\n Division by zero is not possible");
		}
		else {
			printf("\n Quotient of %d and %d is: %d",num1,num2,num1/num2);
		}
		break;
		default: printf("\n You entered an incorrect operation");
	}
	return 0;
}
