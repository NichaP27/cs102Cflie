#include <stdio.h>
int main ()
{
	int x, y, i, s;
	s = 0;
	printf ("Please enter Num1: ");
	scanf ("%i", &x);
	printf ("Please enter Num2: ");
	scanf ("%i", &y);
	for (i = x; i <= y; i++)
	
		if (i % 6 == 0 && i % 9 == 0)
	    {
	    printf ("%i \n", i);
		s = s + i ;
		}
		printf ("\nTotal is %i ", s);
	return 0;
}
