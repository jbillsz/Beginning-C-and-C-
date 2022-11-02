#include<stdio.h>
int main()
{
	int heros,killers=3,characters;
	printf("Enter the number of heros:");
	scanf("\n%d",&heros);
	characters=heros+killers;
	printf("There are %d characters",characters);
	return 0;
}
