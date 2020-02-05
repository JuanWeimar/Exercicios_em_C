#include <stdio.h>
main()
{
	char ordem,palavra0,palavra1;
	printf("digite C D ou F\n");
	scanf("%c",&ordem);
	while(ordem!='C' && ordem!='D' && ordem!='F')
	{
		scanf("%c",&ordem);
	}
	while(ordem=='C' || ordem=='D' && ordem!='F')
	{
	printf("digite o primeiro caractere\n");
	scanf("\n%c",&palavra0);
	printf("digite o segundo caractere\n");
	scanf("\n%c",&palavra1);
	if(ordem=='C')
	{
	printf("%c %c\n",palavra0,palavra1);}
	else{
	printf("%c %c\n",palavra1,palavra0);
}
	scanf("\n%c",&ordem);
	}
}
