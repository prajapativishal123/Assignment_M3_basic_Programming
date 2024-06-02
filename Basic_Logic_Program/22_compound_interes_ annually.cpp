/*Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/
#include<stdio.h>
main()
{
	int principal,rate,time;
	float a,b,amount,compound_Interes;
	printf("\n\n\t Enter the principal amount :");
	scanf("%d",&principal);
	printf("\n\n\t Enter the annual interest rate  :");
	scanf("%d",&rate);
	printf("\n\n\t Enter the time in years :");
	scanf("%d",&time);
	a=rate/100;
	b=1+a;
	amount= principal*b*time;
	printf("\n\n\t compound interest annually is given by :%2f",amount);
	
	compound_Interes=amount-principal;
	printf("\n\n\t compound interest  :%2f",compound_Interes);
	
	
	
	
	
	
}
