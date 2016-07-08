#ifndef __COMPLEX_H__
#define __COMPLEX_H__

typedef struct _complex {
	double real;
	double imag;	
} 
complex;

complex add(complex a, complex b);

#endif