#include <stdio.h>
#include <math.h>

float SquareEquality(float a, float b, float c, float *x1, float *x2, float *x3)
{
    float D = b*b - 4*a*c;
    printf ("D = %f\n", D);
    	 
    
    if (D == 0) {
    	*x3 = (-b)/(2*a);
	return 1; 
    }
	
    
    else if (D > 0) {
    	*x1 = ((-1*b)+sqrt(D))/(2*a);
    	*x2 = ((-1*b)-sqrt(D))/(2*a);
	return 2;
    }
    
    else return 0;
    
}
