#include <stdio.h>
#include <assert.h>

#include "complex_test.h"
#include "complex.h"

void testAdd();
void testSub();
void testMult();
void testScale();
void testEquals();
void testDiv();

void test(){
	testAdd();
	testSub();
	testMult();
	testScale();
	testEquals();
	testDiv();
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

void testDiv(){
	printf("testDiv\n");
	complex a;
	a.real = 16;
	a.imag = 4;
	
	complex b;
	b.real = 2;
	b.imag = 10;

	complex c;
	c = div(a,b);
	assert(c.real == (72/108) && c.imag == (152/108));
}
/*
printf("%lf\n", c.real);
printf("%lf\n", c.imag);
*/