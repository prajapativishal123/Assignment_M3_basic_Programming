/*Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
main()
{
	int temp;
	printf("\n\n\t Enter temperature :" );
	scanf("%d",&temp);
	
	if (temp>40)
	printf("\n\n\t Its Very Hot ");
	else if (temp>30)
	printf("\n\n\t Its Hot ");
	else if (temp>20)
	printf("\n\n\t Normal ");
	else if (temp>10)
	printf("\n\n\t Cold weather ");
    else if (temp>0)
	printf("\n\n\t Very Cold weather ");
	else
	printf("\n\n\t Freezing weather ");
	
}
	
	
	
	
	
	
	
	
