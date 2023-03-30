#include <stdio.h>

/**
 * A C program that makes a simple calculator
 */

int main(void)
{
	int a, b, sum;// declaring an int variable
	char operator; // declaring a charater variable 

	printf("Enter Operator:");// to printout the message to the user

	scanf("%c", &operator); //take input from the user with scanf function

	printf("\nEnter two operands:\n"); // print out this msg to the user

	scanf("%d %d", &a, &b);//take a two integer input from thr user

	switch(operator)
	{
		case '+': sum= a+b;// a switch case that adds two operators
			  printf("sum = %d", sum);
			  break;
		case '-': sum= a-b;// a switch case the minus two operators
			  printf("the Difference is = %d", sum);
			  break;
		case '/': sum = a/b; // a switch case that divide two opeators 
			  printf("The Quotient is = %d", sum);
			  break;
		case '*': sum = a*b; // a swithc case that multiplis two operators 
			  printf ("the Product is  = %d", sum);
			  break;
		default: // this one says when you enter an invalid operator 
			  printf("enter a valid operator ");
			  break;
	}
	return (0);
}
