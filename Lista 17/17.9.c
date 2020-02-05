#include <stdio.h>
int calculaDigito(int n);

main()
{
	int n,d;
	do
	{
		printf("Digite valores: \n");
		scanf("%d",&n);
		d=calculaDigito(n);
		if(d>=0)
		printf("%d \n",d);
	}
	while(n>0);
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
