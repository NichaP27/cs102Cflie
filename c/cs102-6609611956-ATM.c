#include <stdio.h>
int main ()
{
	int amount, n1000, n500, n100 ;
	printf ("Please enter your withdrawal amount: ");
	scanf ("%i", &amount);
	n1000 = amount / 1000 ;
	n500 = (amount % 1000) / 500 ;
	n100 = ((amount % 1000) % 500) / 100 ;
	printf ("You well get : -\n");
	printf ("#1000-bath note: %i\n", n1000);
	printf ("#500-bath note: %i\n", n500);
	printf ("#100-bath note: %i\n", n100);
	return 0;
	
}
