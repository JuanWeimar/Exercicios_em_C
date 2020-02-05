#include <stdio.h>
#include <stdlib.h>
int somaDivisores(int n);
int saoAmigos(int n1,int n2);

main()
{
	int n,i,c=0,n1,n2;
	do
	{
		printf("Digite um inteiro:\n");
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
			printf("Digite n1:\n");
			scanf("%d",&n1);
			printf("Digite n2:\n");
			scanf("%d",&n2);
			
			if(saoAmigos(n1,n2)==1)
			{
				printf("%d %d Sao amigos\n",n1,n2);
			}
			else
			{
				printf("%d %d Nao sao amigos\n",n1,n2);
			}
		}
	}
	while(n>0);
	system("pause");
}



int saoAmigos(int n1,int n2)
{
	int s1,s2;
	s1=somaDivisores(n1);
	s2=somaDivisores(n2);
		if(n2==s1)
		{
			if(n1==s2)
			return 1;
		}
		else
		{
			return 0;
		}
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
