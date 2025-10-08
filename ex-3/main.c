#include <stdlib.h>
#include <stdio.h>

int main ()
{
	int i = 0;
	char str [100];
	printf("Veuillez donner un mot:\n");
	scanf("%s", str);

	while(i < 5)
	{
		i++;
		printf("%s\n", str);
	}
	exit(0);
}
