#include <stdio.h>
#include <string.h>
main()
{
	int cod,i,tam,j,tam1;
	char email[40],emailmod[40],aux[40];
	printf("digite 1.antes 2.depois 3.fim\n");
	scanf("%d",&cod);
	while(cod==1 || cod==2)
	{
	printf("digite um e-mail\n");
	scanf("%s",&email);
	tam=strlen(email);
	for(i=0; i<tam; i++)
	{
		if(email[i]=='@')
		tam1=i;
		if(cod==1 && email[i]=='@')
		{
		for(j=0; j<tam1; j++)
		aux[j]=email[j];
		}
		if(cod==2 && email[i]=='@')
		{
		for(j=tam1+1; j<=tam; j++)
		aux[j-(tam1+1)]=email[j];
		}
	}
	strcpy(emailmod,aux);
	printf("%s\n",emailmod);
	tam=0;
	tam1=0;
		scanf("%d",&cod);
		}
}
