#include <stdio.h>
#include <string.h>
main()
{
	int n,i,tam;
	char palavra[20];
	printf("digite um valor\n");
	scanf("%d",&n);
	printf("digite palavras\n");
	for(i=1; i<=n; i++)
	{
		scanf("%s",&palavra);
		tam=strlen(palavra);
		printf("%d ",tam);
		tam=0;
	}
}
