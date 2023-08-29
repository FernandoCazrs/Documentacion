#include <stdio.h>

int principal() {
	int i, num, j;
	printf ("Ingrese el número: ");
	scanf ("%d", &num);

	for (i=1; i<num; i++)
		j=j*i;    

	printf("El factorial de %d es %d\n",num,j);
}