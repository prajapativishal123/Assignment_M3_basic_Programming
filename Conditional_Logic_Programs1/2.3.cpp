/*WAP to make simple calculator (operation include Addition,
Subtraction,Multiplication, Division, modulo) using conditional
statement*/
#include<stdio.h>
main()
{
	int num1,num2;
	char choice;
	printf("\n\n\t Enter 1st number : ");
	scanf("%d",&num1);
	printf("\n\n\t Enter 2sd number : ");
	scanf("%d",&num2);
	printf("\n\n\t Enter Addition : '+' ");
	printf("\n\n\t Enter Subtraction : '-' ");
	printf("\n\n\t Enter Multiplication : '*' ");
	printf("\n\n\t Enter Division : '/' ");
	printf("\n\n\t Enter modulo : '#' ");

	printf("\n\n\t choice operation :  ");
	scanf(" %c",&choice);
	
	
	switch(choice)
	{
			case '+':printf("\n\n\t Addition = %d ",num1+num2);
				 break;
		
		case '-':printf("\n\n\t Subtraction = %d ",num1-num2);
				 break;
		case '*':printf("\n\n\t Multiplication = %d ",num1*num2);
				 break;
		case '/':printf("\n\n\t Division = %d ",num1/num2);
				 break;
		case '#':printf("\n\n\t modulo = %d ",num1%num2);
				 break;
		default :printf("\n\n\t TRY AGAIN ");
	
}
}
