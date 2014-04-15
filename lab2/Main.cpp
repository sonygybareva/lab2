#include "sorting.h"

void main ()
{
	char a[100], b[100];
	int i;
	srand (time(NULL));
	system ("cls");
	printf ("a:\n");
	for (i=0; i<100; ++i)
	{
		a[i]=65+rand()%26;
        printf ("%c", a[i]);
	}
	printf ("\na:\n");
	for (i=0; i<100; ++i)
	{
		b[i]=65+rand()%26;
        printf ("%c", b[i]);
	}
	printf ("\nbubble(a):\n");
    bubble (a, 100);///bubble sorting
	for (i=0; i<100; ++i)
        printf ("%c", a[i]);
	printf ("\nmerge(a):\n");
	merge_sort (b, 0, 99);///merge sorting
	for (i=0; i<100; ++i)
        printf ("%c", b[i]);
	printf ("\n");
	system ("pause");
}