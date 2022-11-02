#include <stdio.h>//including input and output stream extension
#define k 0.0001 //defining a token
int main()
{
	int kh=300,kv=200;
	double permeability;
	permeability= kv*kh *k;
	printf("Permeability is %f darcy",permeability);
	return 0;
}
