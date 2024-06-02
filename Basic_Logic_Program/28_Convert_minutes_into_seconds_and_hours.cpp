//Convert minutes into seconds and hours
#include<stdio.h>
main()
{
	int minutes=60,seconds,hours=0;
	
	printf("\n\n\t  minutes :%d ",minutes);
	
	
	seconds=minutes*60;
	hours=minutes/60;
	printf("\n\n\t  seconds:%d hours :%d",seconds,hours);
	
}
