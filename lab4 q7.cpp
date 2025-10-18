#include<stdio.h>
int main()
{
	int units,rate;
	printf("\t \t ELECTRICITY BILL \t \t \n");
	printf("\t \t ---------------- \t \t \n \n");
	printf(" Enter the number of units consumed: ");
	scanf("%d", &units);
	
	if(units<=100) {
		rate=units*10;
		printf("\n Your total bill would be PKR %d",rate);
	}
	else if(units>100 && units<=300) {
		rate=units*15;
		printf("\n Your total bill would be PKR %d",rate);
	}
	else if(units>300 && units<=500) {
		rate=units*20;
		printf("\n Your total bill would be PKR %d",rate);
	}
	else if(units>500) {
		rate=units*25;
		printf("\n Your total bill would be PKR %d",rate);
	}
	return 0;
}

