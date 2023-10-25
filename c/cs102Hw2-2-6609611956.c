#include <stdio.h>
int main ()
{
	int bj, pz, ra, p, st;
	printf ("Please enter a budget amount ");
	scanf ("%i", &bj);
	pz = bj / 599;0
	p = pz * 8;
	st = p / 2 ;
	ra = bj % 599 ;
	printf (" we can provide support for %i students.\n", st);
	printf ("The amount of budjet remain %i baths.", ra);
	return 0;
}
