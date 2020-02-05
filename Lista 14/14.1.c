#include <stdio.h>
main()
{
	char letra;
	int i;
	printf("digite um caractere\n");
	for(i=1; i<=5; i++)
	{
		
		scanf("\n%c",&letra);
		if(letra>='A' && letra<='Z')
		printf("Sim\n");
		else
		printf("Nao\n");
	}
}
