#include <stdio.h>
#include "complex.h"




complex add(complex a, complex b) {
	
	complex result;
	 result.real = a.real + b.real;
	 result.imag = a.imag + b.imag;

	return result;
}