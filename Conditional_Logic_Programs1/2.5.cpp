//Find the Character Is Vowel or Not
#include<stdio.h>
main()
{
	char Character;
	printf("\n\n\t Enter Character :");
	scanf("%c",&Character);
	if(Character=='a' ||Character=='A')
	printf("\n\n\t %c is Vowel :",Character);
	else if(Character=='e' ||Character=='E')
	printf("\n\n\t %c is Vowel :",Character);
	else if(Character=='i' ||Character=='I')
	printf("\n\n\t %c is Vowel :",Character);
	else if(Character=='o' ||Character=='O')
	printf("\n\n\t %c is Vowel :",Character);
	else if(Character=='u' ||Character=='U')
	printf("\n\n\t %c is Vowel :",Character);
	else
	printf("\n\n\t %c is consonant :",Character);
	
}
