#include <stdio.h>
#include "util.h"

#define MAX 15

int a[MAX];

int main()
{
  int i;
  /* fill array */
  for (i=0; i < MAX; i++)
  {
    a[i]=rand();
    printf("%d\n", a[i]);
  }

  bubble_sort(MAX, a);

  /* print sorted array */
  printf("\n----------------\n");
  for (i=0; i < MAX; i++) 
  {
    printf("%d\n", a[i]);
  }

  return 0;
}


