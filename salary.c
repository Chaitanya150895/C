
#include <stdio.h>
int main ( )
{
	int bs;
	float da, hra, gs;

	printf ("Enter the Ramesh's basic salary");
	scanf ("%d", &bs);
	da = 0.4 * bs;
	hra = 0.2 * bs;

	gs = bs + da + hra;
	printf ("%f", gs);
	return 0;

}