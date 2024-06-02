//.WAP to find the largest of three numbers
#include<stdio.h>
main()
{
	int number1,number2,number3,minimum;
	printf("\n\n\t Enter 1st Number :" );
	scanf("%d",&number1);
	printf("\n\n\t Enter 2nd Number :" );
	scanf("%d",&number2);
	printf("\n\n\t Enter 3rd Number :" );
	scanf("%d",&number3);

if (number1 >= number2 || number1 >=number3)
        printf("\n\n\t largestNumber :%d",number1 );
     else if  (number2 >= number1 and number2 >= number3)
  		printf("\n\n\t largestNumber :%d",number2 );
    else
        printf("\n\n\t largestNumber :%d",number3 );
    }

