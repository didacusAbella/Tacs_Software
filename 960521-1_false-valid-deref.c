
#include <assert.h>
#include <stdlib.h>

int *a, *b;
int n;

#define BLOCK_SIZE 128

void foo ()
{
  int i;
  for (i = 0; i < n; i++)
    a[i] = -1;
  for (i = 0; i < BLOCK_SIZE - 1; i++)
    b[i] = -1;
}

int main ()
{
  n = BLOCK_SIZE;
  a = malloc (n * sizeof(*a));
  b = malloc (n * sizeof(*b));
  *b++ = 0;
  foo ();
  int memcheck = 0;
  if (b[-2]) /* invalid deref */
  { free(a); free(b-1); memcheck = 1; }
  else
  { free(a); free(b-1); }
  assert(memcheck == 0);
  return 0;
}
