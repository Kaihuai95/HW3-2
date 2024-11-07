#include <stdio.h>

int power(int, int);

int main()
{
	int input_base;
	int input_exponent;
	int exponent_number;

	printf("Enter base number: ");
	scanf("%d", &input_base);

	printf("Enter exponent number (greater than or equal to 1): ");
	scanf("%d", &input_exponent);

	exponent_number = power(input_base, input_exponent);

	printf("Exponent number is %d\n", exponent_number);
}

int power(int base, int exponent)
{
	if (exponent == 1){
		return base;
	}else{
		return base * power(base, exponent - 1);
    }
}