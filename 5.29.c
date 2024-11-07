#include <stdio.h>

int lcm(int, int);

int main()
{
	int n1;
	int n2;
	int lcm_number;

	printf("Enter first number: ");
	scanf("%d", &n1);

	printf("Enter second number: ");
	scanf("%d", &n2);

	lcm_number = lcm(n1, n2);

	printf("LCM is %d\n", lcm_number);
}

int lcm(int a, int b)
{
	for(int i=1; i<=a*b; i++){
	    if(i%a==0 && i%b==0){
	        return i;
	        break;
	    }
	}
}