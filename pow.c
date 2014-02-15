#include<stdio.h>
#include "calculator.h"

float pow(float a,float b)
{

	float pow = 1; 
	int i;
	for(i=1; i<= b; i++)
		pow = pow * a;
	return(pow);
}  
