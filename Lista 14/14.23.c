#include <stdio.h>
#include <string.h>
main()
{
	int tam,i,j=0;
	char letra,palavra[20],modificada[20],aux[20];
	printf("digite uma letra\n");
	scanf("\n%c",&letra);
	printf("digite uma palavra\n");
	scanf("%s",&palavra);
	tam=strlen(palavra);
	for(i=0; i<tam; i++)
	{
		
		if(palavra[i]!=letra)
		aux[j]=palavra[i];
		else
		{
		aux[j]=palavra[i+1];
		j--;
		}
		j++;
	}
		strcpy(modificada,aux);
	
	printf("%s\n",modificada);
}
