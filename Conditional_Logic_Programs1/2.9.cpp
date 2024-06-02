/*C Program to Check Uppercase or Lowercase or Digit or Special
Character*/
#include<stdio.h>
main()
{
	char Character;
	printf("\n\n\t Enter Character : ");
	scanf("%c",&Character);

	 if (Character>='a')
	printf("\n\n\t %c is Character Lowercase  ",Character);
	else if (Character>='A')
	printf("\n\n\t %c is Character Uppercase  ",Character);
	else if (Character>='0')
	printf("\n\n\t %c is Character Digit  ",Character);
	else
	printf("\n\n\t %c is Character Special Character  ",Character);

	
	
	
	
	
}
