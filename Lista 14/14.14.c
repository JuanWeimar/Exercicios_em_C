#include <stdio.h>
#include <string.h>
main()
{
	int n,i,tam,j;
	char palavra[20];
	printf("digite um valor\n");
	scanf("%d",&n);
	printf("digite palavras\n");
	for(i=1; i<=n; i++)
	{
		scanf("%s",&palavra);
		tam=strlen(palavra);
		for(j=0; j<tam; j++)
		{
		if(j==0)
		printf("%c ",palavra[j]);
		if(j==tam-1)
		printf("%c ",palavra[j]);
	}
	tam=0;
}
}
