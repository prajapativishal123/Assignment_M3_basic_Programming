/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/
#include<stdio.h>
main()
{
	float salary,insurance_premium,loan_installment,remaining_salary,a;
	printf("\n\n\t Employ salary : ");
	scanf("%f",&salary);
	insurance_premium=salary*10/100;
	printf("\n\n\t Employ insurance_premium : %2f ",insurance_premium);
	loan_installment=salary*10/100;
	printf("\n\n\t Employ loan installment : %2f ",loan_installment);
	a=insurance_premium+loan_installment;
	remaining_salary=salary-a;
	printf("\n\n\t Employ remaining salary IP :%2f -LP :%2f = %2f",insurance_premium,loan_installment,remaining_salary);
	
	
}
