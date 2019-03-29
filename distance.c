
#include <stdio.h>
int main ( )
{
	int km;
	float m, ft, in, cm;

	printf ("Enter the distance in KMs");
	scanf ("%d", &km);
	m = 1000 * km;
	ft = 3280.84 * km;
	in = 39370.1 * km;
	cm = 100000 * km;

	
	printf ("This distance in meters " "%f\n", m);
	printf ("This distance in feet " "%f\n", ft);
	printf ("This distance in inches " "%f\n", in);
	printf ("This distance in centimeters " "%f\n", cm);
	return 0;

}