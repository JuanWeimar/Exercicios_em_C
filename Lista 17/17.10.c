#include <stdio.h>
int numCorreto(int n);
int calculaDigito(int n);

main()
{
	int n,v;
	do
	{
		printf("Digite valores: \n");
		scanf("%d",&n);
		v=numCorreto(n);
		if(n>9 && n<1000000)
		{
			if(v==1)
			{
			printf("Ok \n");
			}
			else
			{
			printf("Erro \n");
			}
			
		}
		
	}
	while(n>9 && n<1000000);
}


int numCorreto(int n)
{
	int m,soma=0;
	while(n>0)
		{
			soma=soma+n%10;
			n=n/10;

		m=calculaDigito(n);
		if(soma==m)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		}
}

int calculaDigito(int n)
{
	int soma=0,dv,i,dg;
		while(n>0)
		{
			for(i=2; i<=5; i++)
			{
			soma=soma+(n%10)*i;
			n=n/10;
			}
			soma=soma%11;
			soma=11-soma;
			if(soma==10 || soma==11)
			{
				dg=0;
				return dg;
			}
			else
			{
				dg=soma;
				return dg;
			}
		}
}
