#include <stdio.h>
#include <assert.h>

#include "complex_test.h"
#include "complex.h"

void testAdd();

void test(){
	testAdd();
	printf("All passed!\n");
}

void testAdd(){
	printf("testAdd\n");
	complex a;
	complex b;
	complex c;
	
	a.real = 16;
	a.imag = 4;
	
	
	b.real = 2;
	b.imag = 10;

	c = add(a,b);
	assert(c.real == 18 && c.imag == 14);
}