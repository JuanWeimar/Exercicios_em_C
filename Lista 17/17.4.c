#include <stdio.h>
#include <math.h>
int fatorial(int n);
float calculaserie(int n,int x);
float main()
{
	int v1,v2;
	float resultado;
		
		printf("Digite o primeiro valor\n");
		scanf("%d",&v1);
		while(v1>0)
		{
		printf("Digite o segundo valor\n");
		scanf("%d",&v2);	
		resultado=calculaserie(v1,v2);
		printf("%f\n",resultado);
		printf("Digite o primeiro valor\n");
		scanf("%d",&v1);
		}
	
}






int fatorial(int n)
{
	int i,fat=1;
	
	for(i=1; i<=n; i++)
	{
		fat=fat*i;
	}
	return fat;
}

float calculaserie(int n,int x)
{
	float s=0;
	int den=1,i;
	for(i=1; i<=n; i++,den=den+2)
	{
		if(i%2==1)
		{
			s=s+pow(x,den)/fatorial(den);
		}
		else
		{
			s=s-pow(x,den)/fatorial(den);
		}
	}
	return s;
}
