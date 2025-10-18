#include<stdio.h>
int main()
{
	int num;
	printf(" Enter a Number: ");
	scanf("%d", &num);
	if(num>0) {
		printf("\n %d is a positive number",num);
	}
	else if(num<0) {
		printf("\n %d is a negative number",num);
	}
	else {
		printf("\n It is zero");
	}
	return 0;
}

