#include <stdio.h>
int main()
{
	int n,r,l;
	printf("Introduce el tamanio de la figura: ");
	scanf_s("%i", &n);
	printf("\n");

	for (r = 1; r <= n; r++)
	{
		for (l = 1; l <= n; l++)
		{
			printf("*");
		}
	}
	return 0;
}
