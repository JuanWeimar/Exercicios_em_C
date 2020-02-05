#include <stdio.h>
#include <stdlib.h>
int somaDivisores(int n);
int ehPerfeito(int n);

main()
{
	int n,i,c=0;
	do
	{
		printf("Digite um inteiro:\n");
		scanf("%d",&n);
		if(n>0)
		{
		//	m=ehPerfeito(n);
			if(ehPerfeito(n)==1)
			{
				printf("%d e perfeito\n",n);
			}
			else
			{
				printf("%d nao e perfeito\n",n);
			}
		}
	}
	while(n>0);
	system("pause");
}

int somaDivisores(int n)
{
	int i,c=0;
		for(i=1; i<=(n-1); i++)
			{
				if(n%i==0)
				{
					c=c+i;
				}
			}
		return c;
}

int ehPerfeito(int n)
{
	int p,c;
		p=somaDivisores(n);
		if(n==p)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}



