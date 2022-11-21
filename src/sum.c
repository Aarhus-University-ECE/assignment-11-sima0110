#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert (n >= 1); //precondition//
  if (n == 1) //base case//
  {
    return 1 + total; 
  }
  else
  {
    return sumtail(n - 1, n + total);
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert (n > 0); //checks the precondition// 
  int sum = 0; 
  while (n > 0) //while loop where value of n gets added to sum//
  {
    sum = n + sum; 
    n--;
  }
  
  return sum;
}

