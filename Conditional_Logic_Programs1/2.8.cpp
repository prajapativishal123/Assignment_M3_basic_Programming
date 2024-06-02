/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include<stdio.h>
main()
{
	int height;
	printf("\n\n\t Enter height :");
	scanf("%d",&height);
	if (height<150)
	printf("\n\n\t Short :");
	else if (height<170)
	printf("\n\n\t Normal :");
	else if (height<190)
	printf("\n\n\t Tall :");
	else
	printf("\n\n\t Extra tall :");
	
}
