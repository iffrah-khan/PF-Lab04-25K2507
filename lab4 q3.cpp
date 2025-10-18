#include<stdio.h>
int main()
{
	int water_level;
	
	printf(" \t \t FLOOD RELIEF ASSISTANCE \t \t \n");
	printf(" \t \t ----------------------- \t \t \n");
	
	printf(" Enter the water level in your area: ");
	scanf("%d", &water_level);
	printf("\n Water level in your area is %d ft, so ",water_level);
	
	if(water_level<2) {
		printf("No Relief Required");
	}
	else if(water_level>=2 && water_level<4) {
		printf("Small Relief Package");
	}
	else if(water_level>=4 && water_level<=6) {
		printf("Medium Relief Package");
	}
	else if(water_level>6) {
		printf("Evacuation Required");
	}
	return 0;
}

