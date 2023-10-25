#include <stdio.h>
int main ()
{
	int a, i ,r;
	printf ("Enter the size of the flag : ");
	scanf ("%d", a);
	for ( r= 1;r<=a;r++ )
	{
	for (i = 1 ; i<= a; i++ )
	    printf ("@");
	printf ("\n");}
	return 0;
}
