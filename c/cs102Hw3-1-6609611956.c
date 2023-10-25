#include <stdio.h>
int main ()
{
	int x, y, n, m;
	char word[] = "ox" ;
	printf ("Enter size of your rectangle:");
	scanf (" %d %d",&x,&y);
	for (m=1;m<=x;m++)
	   {
	   	for (n=1;n<=y;n++)
	   	    printf ("%s",word);
	   	printf ("\n");
	   }
	   return 0;
}
