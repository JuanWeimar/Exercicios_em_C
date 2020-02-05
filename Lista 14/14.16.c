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
		for(j=tam; j>=0; j--)
		printf("%c",palavra[j]);
		tam=0;
	}
}
