#include <stdio.h>
#define Pi 3.14159
int main()
{
	double area =0.0, radius=0.0;
	printf("Enter raduis: ");
	scanf("%lf",&radius);
	area =Pi *radius*radius;
	printf("radius of %lf meters; area is %lf sq.meters\n",radius, area);
	return 0;
}
