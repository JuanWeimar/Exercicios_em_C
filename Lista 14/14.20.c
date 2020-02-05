#include <stdio.h>
#include <string.h>
main()
{
	int cod,i,comp;
	char palavra1[20],palavra2[20];
	printf("digite 1.crescente 2.decrescente\n");
	scanf("%d",&cod);
	while(cod==1 || cod==2)
	{
	printf("digite a primeira palavra\n");
	scanf("%s",&palavra1);
	printf("digite a segunda palavra\n");
	scanf("%s",&palavra2);
	comp=strcmp(palavra1,palavra2);
	if(cod==1 && comp>0)
	printf("%s,%s\n",palavra2,palavra1);
	if(cod==1 && comp<0)
	printf("%s,%s\n",palavra1,palavra2);
	if(cod==2 && comp<0)
	printf("%s,%s\n",palavra2,palavra1);
	if(cod==2 && comp>0)
	printf("%s,%s\n",palavra1,palavra2);
	scanf("%d",&cod);
	}
	
}
