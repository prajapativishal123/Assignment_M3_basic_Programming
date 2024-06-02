/*Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible*/

#include<stdio.h>
main()
{
	int maths,phy,chem,total,total2;
	
	printf("\n\n\t Enter marks in Physics: ");
    scanf("%d", &phy);
	printf("\n\n\t Enter marks in Maths: ");
    scanf("%d", &maths);
 	printf("\n\n\t Enter marks in Chemistry: ");
    scanf("%d", &chem);
    total=phy+maths+chem;
    printf("\n\n\t total marks : %d ",total);
    total2=phy+maths;
    printf("\n\n\t total marks(phy & maths) : %d ",total2);
    
     if (phy >= 65 && chem >= 55 && maths >= 50 && total >= 190) 
	 
        printf("\n\n\t  candidate is eligible");
     else if (total2>= 140) 
        printf("\n\n\t  candidate is eligible");
     else 
        printf("\n\n\t  candidate is not eligible");
    
    
}
    
