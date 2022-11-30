#include <stdio.h>
int main()
{
	int tamanio, ancho, largo;
	printf("Este programa puede dibujar rectangulos del tamanio que decidas. \n");
	printf("Introduce el tamanio de la figura: ");
	scanf_s("%i", &tamanio);
	printf("\n");
	for (ancho = 1; ancho <= tamanio; ancho++)
	{
		for (largo = 1; largo <= tamanio; largo++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
