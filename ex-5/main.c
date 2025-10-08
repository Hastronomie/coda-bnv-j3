#include <stdlib.h>
#include <stdio.h>

int main ()
{
	char signe;
	int nb;
	int i=0;
	printf("Choisissez entre + et - : ");
	scanf("%c", &signe);
	printf("Et maintenant un nombre entier différent de 0: ");
	scanf("%d", &nb);
	if (signe == 43)
	{
		while ( i != nb)
		{
			printf("%d\n", i);
			i++;
		}
	}
	else if (signe == 45)
	{
		while (nb != i)
		{
			printf("%d\n", nb);
			nb--;
		}
	}
	else
	{
		printf("Le symbole n'est pas dans ceux proposé.\n");
	}
	exit(0);
}
