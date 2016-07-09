#include <stdio.h>
#include <assert.h>
#include <math.h>

#include "complex_test.h"
#include "complex.h"

void testAdd();
void testSub();
void testMult();
void testScale();
void testEquals();
void testDivision();
void testAbsolute();
void testArgument();

void test(){
	testAdd();
	testSub();
	testMult();
	testScale();
	testEquals();
	testDivision();
	testAbsolute();
	testArgument();
	printf("All passed!\n");
}

void testAdd(){
	printf("testAdd\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	complex c;
	c = add(a,b);
	assert(c.real == 18 && c.imag == 14);
}

void testSub(){
	printf("testSub\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	complex c;
	c = sub(a,b);
	assert(c.real == 14 && c.imag == -6);
}

void testMult(){
	printf("testMult\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	complex c;
	c = mult(a,b);
	assert(c.real == -8 && c.imag == 168);
}

void testScale(){
	printf("testScale\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	double sc = 3;

	complex c = scale(a, sc);
	assert(c.real == 48 && c.imag == 12);
}

void testEquals(){
	printf("testEquals\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	assert(!equals(a,b));

	complex c;
	c.real = a.real;
	c.imag = a.imag;

	assert(equals(a,c));
}

void testDivision(){
	printf("testDivision\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	complex c;
	c = division(a,b);

	double r = 72 / (double)104;
	double i = -152 / (double)104;

	assert(c.real == r && c.imag == i);
}

void testAbsolute(){
	printf("testAbsolute\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	double abs = absolute(a);

	assert(abs == sqrt((double)272));
}

void testArgument(){
	printf("testArgument\n");
	complex a;
	a.real = 16;
	a.imag = 4;

	assert(argument(a) == atan2(4,16));
}
/*
printf("%lf\n", c.real);
printf("%lf\n", c.imag);
*/