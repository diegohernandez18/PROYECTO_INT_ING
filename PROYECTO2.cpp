#include <stdio.h>
int main()
{
	int tamanio, ancho, largo, opcion;
	printf("Este programa puede dibujar algunas figuras del tamanio que decidas. \n");
	printf("Que figura deseas hacer?\n");
	printf("Escribe 1 para hacer un rectangulo, 2 para hacer un trangulo: ");
	scanf_s("%i", &opcion);
	printf("\n");
	if (opcion == 1)
	{
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
}
