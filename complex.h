#ifndef __COMPLEX_H__
#define __COMPLEX_H__

#define TRUE 1;
#define FALSE 0;

typedef struct _complex {
	double real;
	double imag;	
} 
complex;

complex add(complex a, complex b);
complex sub(complex a, complex b);
complex mult(complex a, complex b);
complex scale(complex a, double scale);
int equals(complex a, complex b);
complex division(complex a, complex b);

#endif