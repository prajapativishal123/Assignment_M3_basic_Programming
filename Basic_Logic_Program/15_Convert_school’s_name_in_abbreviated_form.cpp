//.Convert school’s name in abbreviated form
#include<stdio.h>
main()
{
  char fname[20], mname[20], lname[20];
      
	printf("\n\n\t Enter School Name  :");
    scanf("%s %s %s", fname, mname, lname);
    printf("\n\n\t Abbreviated  School Name:%c. %c. %s ",fname[0], mname[0], lname);
    
	
}
