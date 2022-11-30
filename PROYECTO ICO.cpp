#include <stdio.h>
int main()
{
	int tamanio, ancho, largo, opcion, asterisco = 1;
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
	if (opcion == 2)
	{
		printf("Este programa puede dibujar triangulos del tamanio que decidas. \n");
		printf("Introduce el tamanio de la figura: ");
		scanf_s("%i", &tamanio);
		for (ancho = 1; ancho <= tamanio; ancho++)
		{
			for (int i = 1; i <= asterisco; i++)
			{
				printf("*");
			}
			printf("\n");
			asterisco = asterisco + 1;
		}
	}
}