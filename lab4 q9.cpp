#include<stdio.h>
int main()
{
	int rainfall, river_flow;
	
	printf("\t \t PREDICTION OF FLOOD RISK LEVEL \t \t \n");
	printf("\t \t ------------------------------ \t \t \n \n");
	printf(" Enter the amount of rainfall in your area: ");
	scanf("%d", &rainfall);
	printf("\n Enter the amount of river flow in your area: ");
	scanf(" %d", &river_flow);
	
	printf("\n The rainfall in your area is %d mm",rainfall);
	printf("\n The river flow in your area is %d m^3/s",river_flow);
	
	if(rainfall<50 && river_flow<200) {
		printf("\n\n Risk level: Low Risk");
	}
	else if(rainfall>=50 && rainfall<=100   &&   river_flow>=200 && river_flow<=500) {
		printf("\n\n Risk level: Moderate Risk");
	}
	else if(rainfall>100 && rainfall<=150   &&   river_flow>500 && river_flow<=800) {
		printf("\n\n Risk level: High Risk");
	}
	else if(rainfall>150 && river_flow>800) {
		printf("\n\n Risk level: Severe Risk - Evacuate");
	}
	else {
		printf("\n\n Your data doesn't match with NDMA categories");
	}
	return 0;
}
