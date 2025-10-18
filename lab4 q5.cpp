#include<stdio.h>
int main()
{
	int marks;
	printf(" Enter your marks out of 100: ");
	scanf("%d", &marks);
	
	if(marks>=85 && marks<=100) {
		printf("\n Your Grade is: A");
	}
	else if(marks>=70 && marks<85) {
		printf("\n Your Grade is: B");
	}
	else if(marks>=55 && marks<70) {
		printf("\n Your Grade is: C");
	}
	else if(marks>=40 && marks<55) {
		printf("\n Your Grade is: D");
	}
	else if(marks<40) {
		printf("\n Your Grade is: F");
	}
	else {
		printf("\n Invalid Marks");
	}
	return 0;
}

