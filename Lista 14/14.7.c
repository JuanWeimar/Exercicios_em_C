#include <stdio.h>
main()
{
	char letra1,letra2;
	do
	{
	printf("digite uma letra\n");
	scanf("\n%c",&letra1);
	while(letra1<'A' || letra1>'Z' && letra1<'a' || letra1>'z')
	{
		scanf("\n%c",&letra1);
	}
	printf("digite outra letra\n");
	scanf("\n%c",&letra2);
	while(letra2<'A' || letra2>'Z' && letra2<'a' || letra2>'z')
	{
		scanf("\n%c",&letra2);
	}
	if(letra2==letra1+32 || letra2==letra1-32)
	break;
	if(letra1<letra2)
	printf("decrescente\n");
	else
	printf("crescente\n");
	}
	while(letra2!=letra1+32 && letra2!=letra1-32);
}
