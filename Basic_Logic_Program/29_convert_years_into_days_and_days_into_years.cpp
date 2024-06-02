//WAP to convert years into days and days into years
#include<stdio.h>
main()
{
	int days,month,year;
	
	printf("\n\n\t Enter year : ");
	scanf("%d",&year);
	
	month=year*12;
	days=month*30;
	printf("\n\n\t  day:%d ",days);
	
	printf("\n\n\t Enter days : ");
	scanf("%d",&days);
	month=days/30;
	year=month/12;
	printf("\n\n\t  year:%d ",year);
	
	
	
	
}
