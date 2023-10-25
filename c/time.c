#include <stdio.h>
int main ()
{
	int sec, hour, min, Rhour, Rmin, second;
	printf ("enter sec: ");
	scanf ("%i", &sec);
	hour = sec / 3600 ;
	Rhour = sec % 3600 ;
	min = Rhour / 60 ;
	Rmin = Rhour % 60 ;
	second = Rmin;
	printf ("%i \n", hour);
	printf ("%i \n", min);
	printf ("%i", second);
	return 0;

}
