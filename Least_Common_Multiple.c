// C program : LCM of two numbers

#include <stdio.h>

int gcd(int a, int b)
{
	if (a == 0) return b;
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver code
int main()
{
	int a = 15, b = 20;
	printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
	return 0;
}



/*
OUTPUT: 
LCM of 15 and 20 is 60
*/
