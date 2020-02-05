#include <stdio.h>
#include <string.h>
main()
{
	char letra,palavra[20];
	int i,tam,c=0;
	printf("digite uma letra\n");

		scanf("\n%c",&letra);
		while(letra!='f')
		{
		printf("digite uma palavra\n");
		scanf("%s",&palavra);
		tam=strlen(palavra);
		for(i=0; i<tam; i++)
		{
			if(palavra[i]==letra)
			c++;
		}
		printf("%d\n",c);
		tam=0;
		c=0;
		scanf("\n%c",&letra);
		}
		
	
}
