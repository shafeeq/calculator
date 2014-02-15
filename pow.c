#include<stdio.h>
#include "calculator.h"

float power(float a,float b) 
{
	float pow = 1.0; 
	int i;
	for(i = 1; i <= b; i++)
		pow = pow * a;
	return(pow);
}  
