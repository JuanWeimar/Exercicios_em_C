#include <stdio.h>
#include <string.h>
main()
{
	int n,i,tam,j,c=0;;
	char palavra[20];
	printf("digite palavras\n");
	do
	{
		c=0;
		tam=0;
		gets(palavra);
		tam=strlen(palavra);
		for(j=0; j<tam; j++)
		{
		if(palavra[j]==' ')
		c++;
		}
			if(c>0)
			printf("%d ",c);
			printf("\n");
	}
	while(c>0);
}
