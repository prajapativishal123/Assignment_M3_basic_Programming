#include<stdio.h>
main()
{
	int rollno;
	char name[20];
	char fname[10], lname[10];
	int s1, s2, s3, s4, s5;
	int total;
	float per;
	
	printf("\n\n\t Enter Rollno : ");
	scanf("%d",&rollno);
	
	/*printf("\n\n\t Enter Name : ");
	//scanf("%s",&name); //never allowed space in string.
	*/
	printf("\n\n\t Enter First Name : ");
	scanf("%s",&fname);
	printf("\n\n\t Enter Last Name : ");
	scanf("%s",&lname);
	
	printf("\n\n\t Enter Marks for Subject-1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Enter Marks for Subject-2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Enter Marks for Subject-3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Enter Marks for Subject-4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Enter Marks for Subject-5 : ");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	
	printf("\n\n\t ...............................");
	printf("\n\n\t Roll No : %d",rollno);
	printf("\n\n\t Name of the student : %s %s",fname, lname);
	
	printf("\n\n\t ...............................");
	
	printf("\n\n\t Subject Score  : ");
	printf("\n\n\t Subj1ct -1 : %d",s1);
	printf("\n\n\t Subj1ct -2 : %d",s2);
	printf("\n\n\t Subj1ct -3 : %d",s3);
	printf("\n\n\t Subj1ct -4 : %d",s4);
	printf("\n\n\t Subj1ct -5 : %d",s5);
	printf("\n\n\t ...............................");
	
	printf("\n\n\t Total of Subject Score : %d",total);
	printf("\n\n\t PErcentages : %.2f",per);
	
}
