#include <stdio.h>
int main ()
{
	int h,m,p,c ;
	printf ("Enter Hour : ");
	scanf ("%i",&h);
	m = h * 350;
	printf ("Total : %i\n",m);
	printf ("pay : ");
	scanf ("%i",&p);
	while (p<m)
	   {
	   	printf ("re enter : ");
	   	scanf ("%i",&p);
	   }
	c = p - m;
	printf ("Change %i",c);
	if (c > 0)
	{
		printf ("\nChange");
	}
	return 0;

}
