#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("Please enter lenhth of each side of your triangle : \n");
	scanf ("%i %i %i", &a, &b, &c);
	 if (a == b && b == c && c == a)
	    printf ("This is an equilateral triangle");
	 else
	  if (a > b + c || b > a + c || c > a + b)
	     printf ("This is NOT triangle");
	  else
	   if (a != b && b != c && c != a)
	     printf ("This is scalene triangle");
	   else 
	    if (a == b || b == c || c == a)
	      printf ("This is an isosceles triangle");
	    else
	return 0;
}


