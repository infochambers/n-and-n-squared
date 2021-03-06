//    A program to generate and display a table of n and n^2, for integer values 
//    of n ranging from 1 to 10. 

//    Do the standard initial C bits
#include <stdio.h>

int main (void)
{

//    Declare integer n
	int n;

//    Print out headers for the columns of n and n^2
	printf ("TABLE OF SQUARED NUMBERS\n\n");
	printf (" n and n^2 from 1 to n\n");
	printf ("-------------------\n");

//    For loop:
//    Initial: Set n at zero
	for ( n = 0;

//    Looping condition: N being less than 11
		n < 11;

//    Evaluation: increment n by one
		n++ )
	{
//    Print out the numbers for the current n and n^2 with spacing added to 
//    have all the column numbers lined up correctly.
		printf (" %2i %3i\n", n, n*n);
	}
//    There is nothing to return
	return 0;
}
