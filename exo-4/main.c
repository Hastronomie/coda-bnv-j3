#include <stdlib.h>
#include <stdio.h>

int main()
{
	int nb;
	printf("Veuillez saisir un nombre entier différent de 0: ");
	scanf("%d", &nb);
	int i = 0;
	while (i != nb)
	{
		printf("%d\n", i);
		i++;
	}
	printf("Et enfin %d !\n", i);
	exit(0);
}
