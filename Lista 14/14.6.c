#include <stdio.h>
main()
{
	char caractere;
	do
	{
	printf("digite um caractere\n");
	scanf("\n%c",&caractere);
	if(caractere>='a' && caractere<='z')
	printf("Minuscula\n");
	if(caractere>='A' && caractere<='Z')
	printf("Maiuscula\n");
	if(caractere>='0' && caractere<='9')
	printf("Digito\n");
	if(caractere<'A' && caractere>'z' != caractere<'0' && caractere>9)
	printf("Sem classificacao\n");
    }
    while(caractere!='f');
}
