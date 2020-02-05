#include <stdio.h>
int somaDigitos(int n);

main()
{
	int n,s;
	do
	{
		printf("Digite um inteiro: \n");
		scanf("%d",&n);
		s=somaDigitos(n);
		if(s>0)
		printf("%d \n",s);
	}
	while(n>0);
}

int somaDigitos(int n)
{
	int soma=0;
		while(n>0)
		{
			soma=soma+n%10;
			n=n/10;
		}
		return soma;
	
}
