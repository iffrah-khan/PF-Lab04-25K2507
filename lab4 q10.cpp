#include<stdio.h>
int main()
{
	int akhlaq,honesty,prayer,fasting,zakat,social_behav,conflict_resol;
	float CI;
	
	printf("\t \t ISLAMIC CHARACTER EVALUATION SYSTEM \t \t \n");
	printf("\t \t ----------------------------------- \t \t \n");
	
	printf(" Enter your score of Akhlaq and Manners (0-10): ");
	scanf(" %d",&akhlaq);
	printf("\n Enter your score of Honesty and Trustworthiness (0-10): ");
	scanf(" %d",&honesty);
	printf("\n Enter your score of Prayer Regularity (0=Irregular, 1=Regular): ");
	scanf(" %d",&prayer);
	printf("\n Enter your score of Fasting (0=Never, 1=Sometimes, 2=Always): ");
	scanf(" %d",&fasting);
	printf("\n Enter your score of Zakat and Charity (0-10): ");
	scanf(" %d",&zakat);
	printf("\n Enter your score of Social Behaviour (0-10): ");
	scanf(" %d",&social_behav);
	printf("\n Enter your score of Conflict Resolution Skills (0-10): ");
	scanf(" %d",&conflict_resol);
	
	CI=(akhlaq*2.5)+(honesty*2.0)+(prayer*15)+(fasting*5)+(zakat*1.0)+(social_behav*1.0)+(conflict_resol*1.0);
	printf("\n\n Your Character Index is: %.2f",CI);
	
	if(CI>=85 && CI<=100) {
		printf("\n\n Classification:  Excellent Muslim Character");
		printf("\n\n Remarks:  Role Model for Society");
	}
	else if(CI>=70 && CI<85) {
		printf("\n\n Classification:  Good Muslim Character");
		printf("\n\n Remarks:  Practicing Believer");
	}
	else if(CI>=50 && CI<70) {
		printf("\n\n Classification:  Average Character");
		printf("\n\n Remarks:  Needs Minor Improvement");
	}
	else if(CI>=30 && CI<50) {
		printf("\n\n Classification:  Needs Improvement!");
		printf("\n\n Remarks:  Work on Akhlaq and Ibadah");
	}
	else if(CI<30) {
		printf("\n\n Classification:  Weak Character");
		printf("\n\n Remarks:  Requires Serious Guidance");
	}
	
	return 0;
}

