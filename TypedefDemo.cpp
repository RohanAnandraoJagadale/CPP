#include<stdio.h>

// typedef juna naav    navin naav

typedef int INTEGER;

typedef unsigned long int ULONG;

struct Demo
{
	int a;
	int b;
};

typedef struct Demo DEMO;
typedef struct Demo * PDEMO;

int main()
{
	INTEGER i = 10;         // int i 10;
		
	ULONG j = 20;           // unsigned long int j = 21;
	
	DEMO obj;               // struct Demo obj;

	PDEMO ptr = &obj;       // struct Demo * ptr = &obj;
	
	return 0;
}