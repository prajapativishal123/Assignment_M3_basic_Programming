//.Calculate compound interest
#include<stdio.h>
main()
{
	float amount,rate,time,year,intrest,a;
	printf("\n\n\t Enter amount : ");
	scanf("%f",&amount);
	printf("\n\n\t Enter rate : ");
	scanf("%f",&rate);
	printf("\n\n\t Enter time in years : ");
	scanf("%f",&time);
	printf("\n\n\t Enter timeinterest is compounded per year : ");
	scanf("%f",&year);
	a=rate/time;
	
	intrest=amount*a*year;
	 printf("Compound interest after %d years: %.2f\n",time,intrest);

	
	
	

	
}
