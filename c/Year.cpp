#include <stdio.h>
int main ()
{
	int Y ;
	printf ("Please enter your student year:");
	scanf ("%i", &Y);
	
	if (Y==1)
	    printf ("Hi, Freshmen");
	else
    	if  (Y==2)
	        printf ("You are a sophomore");
	    else 
	        if (Y==3)
	           printf ("Hi, Junior");
	        else
	            if (Y>=4 && Y<=8)
	               printf ("HI, senior");
	            else 
	               printf ("invalid");
	return 0;

 } 
