#include <stdlib.h>
#include <stdio.h>

int main()
{
	char signe;
	printf("Signe operation a identifier:");
	scanf("%c",&signe);
	if(signe==43)
	{
		printf("Il s'agit d'une addition !\n");
	}
	else if(signe==45)
	{
		printf("Il s'agit d'une soustraction !\n");
	}
	else if(signe==47)
	{
		printf("Il s'agit d'une division !\n");
	}
	else if(signe==42)
	{
		printf("Il s'agit d'une multiplication !\n");

	}
	else if(signe==37)
	{
		printf("Il s'agit d'un modulo !\n");
	}
	exit(0);
}
