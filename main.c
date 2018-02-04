#include <stdio.h>

void main()
{
int a, b;

scanf ("%d\t%d", &a, &b);
if (a>=0 && b>=0)
{
for (int i=a+1; i<b; i++)
{
if (i%2!=0)
printf ("%d\t", i);
}
}
else
{
    a=a*-1;
    b=b*-1;
    for (int i=a+1; i<b; i++)
    {
    if (i%2!=0)
    printf ("%d\t", i);
    }
}
}
