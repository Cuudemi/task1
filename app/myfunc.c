#include <stdio.h>
#include <math.h>

float SquareEquality(float a, float b, float c, float *x1, float *x2, float *x3)
{
    *x1 = 0;
    *x2 = 0;
    *x3 = 0;
    float D = b*b - 4*a*c;
    	 
    if (a == 0) {
        *x1 = (-c)/b;
    return 1;
    }


    if (D == 0) {
    	*x3 = (-b)/(2*a);
    return 1;
    }


    if ((a == 0) && (b == 0)) {
       return c;
    }


    else if (D > 0) {
    	*x1 = ((-1*b)+sqrt(D))/(2*a);
    	*x2 = ((-1*b)-sqrt(D))/(2*a);
    return 2;
    }
    
    else return 0;

}
