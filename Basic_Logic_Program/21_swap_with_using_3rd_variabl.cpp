/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
main()
{

int a,b,c;

	printf("\n\n\t enter fist number :");
	scanf("%d",&a);
	printf("\n\n\t enter second number :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("\n\n\t enter fist number :%d",a);
	printf("\n\n\t enter second number :%d",b);
	
	
}
