/* Building a degree to fahrenheit converter.
*/
#include<stdio.h>
int main(void)
{
	int far,celsius;
	printf("Enter a number:");
	scanf("%d",&far);
	celsius=(far-32)/1.8;
	printf("%d fahrenheit is %d celsius",far,celsius);
	return 0;
}
