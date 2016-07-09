#include <stdio.h>
#include <math.h>
#include "complex.h"




complex add(complex a, complex b) {
	
	complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;

	return result;
}

complex sub(complex a, complex b) {
	
	complex result;
	result.real = a.real - b.real;
	result.imag = a.imag - b.imag;

	return result;
}

complex mult(complex a, complex b) {
	
	complex result;
	result.real = (a.real * b.real) - (a.imag * b.imag);
	result.imag = (a.real * b.imag) + (a.imag * b.real);

	return result;
}

complex scale(complex a, double scale) {
	
	complex result;
	result.real = (a.real * scale);
	result.imag = (a.imag * scale);

	return result;
}

int equals(complex a, complex b) {
	return (a.real == b.real) && (a.imag == b.imag);
}

complex div(complex a, complex b) {

	double dividend;
	double divisor;
	double realResult;
	double imagResult;

	divisor = pow(b.real, 2) + pow(b.imag, 2);
	//real
	dividend = (a.real * b.real) + (a.imag * b.imag);
	realResult = dividend / divisor;
	//imag
	dividend = (a.imag * b.real) - (a.real * b.imag);
	imagResult = dividend / divisor;
	
	complex result;
	result.real = realResult;
	result.imag = imagResult;

	return result;
}