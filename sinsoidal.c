#include<stdio.h> // Controls input output
#include<math.h> // Math library that allows me to use math functions like sin

int main(void) // main program beings here
{
	printf("Enter a number between 0 and 1:\n"); //Prompt to input number
	double x; //declared my variable to be a double type
	scanf("%lf",&x); //took the input into my variable
	printf("\nThe sin of the number is %lf radians",sin(x));//converted it into long float to allow the double to be readable.
	return 0; // end of program
	
	
}
