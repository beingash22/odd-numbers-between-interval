#include <stdio.h>

void main()
{
int a, b;

scanf ("%d\t%d", &a, &b);

for (int i=a+1; i<b; i++)
{
if (i%2!=0)
printf ("%d\t", i);
}
}
