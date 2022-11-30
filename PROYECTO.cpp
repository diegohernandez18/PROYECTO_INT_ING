#include <stdio.h>
int main()
{
	int tamanio,r,l;
	printf("Este programa puede dibujar rectangulos del tamanio que decidas");
	printf("Introduce el tamanio de la figura: ");
	scanf_s("%i", &tamanio);
	printf("\n");

	for (r = 1; r <= tamanio; r++)
	{
		for (l = 1; l <= tamanio; l++)
		{
			printf("*");
		}
		    printf("\n");
	}       
	return 0;
}
