#include <stdio.h>
#include <string.h>
main()
{
	int tam,i,c=0,j;
	char palavra[20];
	printf("digite uma palavra\n");
	scanf("%s",&palavra);
	while(palavra!="fim")
	{
	tam=strlen(palavra);
	for(i=0; i<tam; i++)
	{
		if(palavra[i]>='a' && palavra[i]<='z')
		c++;
			
	}
		if(c==tam)
		printf("Sim\n");
		else
		printf("Nao\n");
		//if(palavra[i]>='a' && palavra[i]<='Z')
	scanf("%s",&palavra);
	}
		
	
	tam=0;
}
