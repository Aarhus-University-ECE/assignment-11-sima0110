/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert(n >= 0); //checks the precondition//
    if (n == 1) //the base case//
    {
        return p;
    }
    else if (n == 2)
    {
        return pp; 
    }
    else //the recursive step//
    { 
    return fib(n-1, pp, p+pp);
    }
}
