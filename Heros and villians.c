#include<stdio.h>
int main()
{
	int heros,kilers,characters;
	printf("Enter the number of heros:");
	scanf("\n%d",&heros);
	printf("Enter the number of killers:");
	scanf("%d",&kilers);
	characters=heros+kilers;
	printf("There are %d characters",characters);
	return 0;
}
