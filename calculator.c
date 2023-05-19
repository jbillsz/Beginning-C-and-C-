#include <stdio.h>

int main(void){
    int x; int y; char c;
    printf("Input first number:\t");
    scanf("%d",&x);
    printf("\nInput Second number:\t");
    scanf("%d",&y);
    printf("\nInput operation type: \t");
    scanf(" %c",&c);
    if (c =='+')
    {
    	//Addition
        int addition= x+y;
        printf("%d",addition);
    }
    else if (c=='*')
    {
    	//Multiplication
    	int product = x*y;
    	printf("%d",product);
	}
	else if (c=='-')
	{
		//This is for subtraction.	
		double difference =x-y;
		printf("%lf",difference);
	}
		else if (c=='/')
	{
		//The numerator comes first and denominator comes second
		double quotient =x/y;
		printf("%lf",quotient);
	}

    return 0;
}
