#include "calculator.h"
#include <stdio.h>

int main()
{
	int opt;
	int a,b;
	float x,y;
	do{
		printf("Welcome to Collaboraed Calculator!\n");
		printf("Operations:\n");
		printf("1.Add 2.Subtact 3.Multiply 4.Divide\n");
		printf("5.pow(x,y) 6.log(x) 7.mod(x,y) 8.Exit\n");
		printf("Enter choice: ");
		scanf("%d", &opt);
		if(opt == 1 || opt == 2 || opt == 3 || opt == 7){
		       printf("Enter x and y(integers): ");
		       scanf("%d %d", &a, &b);
		}
		else if(opt == 4 || opt == 5){
			printf("Enter x and y (floats): ");
		        scanf("%f %f", &x, &y);
		}
		else if(opt == 6){
			printf("Enter x(float): ");
			scanf("%f", &x);
		}

		switch(opt){
			case 1:
				printf("%d + %d = %d \n", a, b, add(a,b));
				break;
			case 2:
				printf("%d - %d = %d \n", a, b, subtract(a,b));
				break;
			case 3:
				printf("%d * %d = %d \n", a, b, multiply(a,b));
				break;
			case 4:
				printf("%f / %f = %f \n", x, y, divide(x,y));
				break;
			case 5:
				printf("%f ^ %f = %f \n", x, y, power(x,y));
				break;
			case 6:
				printf("log(%f) = %f\n", x, logx(x));
				break;
			case 7:
				printf("%d mod %d = %d \n", a, b, modulus(a,b));
				break;
			case 8:
				break;
			default: 
				printf("Invalid option\n");
		}
	}while(opt != 8);
	return 0;
}











 
	
