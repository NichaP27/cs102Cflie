//6609611956
#include <stdio.h>
int main ()
{
	int m, d, minH, maxH, hAvg ;
	printf ("Enter height of the mother: " );
	scanf ("%i", &m);
	printf ("Enter height of the Father: ");
	scanf ("%i", &d);
	hAvg = (m + d) / 2 ;
	maxH = hAvg + 12;
	minH = hAvg - 12;
	printf ("The possible-height is between %i ", minH);
	printf (" and %i centimaters", maxH);
	return 0;
}
