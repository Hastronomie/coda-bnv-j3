#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nombre;
	printf("Choissisez un nombre entier:");
	scanf("%d", &nombre);
	
	if (nombre >42)
	{
		printf("%d est helas superieur a 42...\n", nombre);
	}
	else if (nombre <42)
	{
		printf("%d est inferieur a 42 !\n", nombre);
	}
	else if (nombre == 42)
	{
		printf("C'est la reponse a l'univers ! :D\n");
	}
	exit(0);
}
