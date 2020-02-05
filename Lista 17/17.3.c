#include <stdio.h>
float obtemPI(int nv);
int main()
{
	int nv;
	float resultado;
	do
	{
		printf("\nDigite um valor: \n");
		scanf("%d",&nv);
		if(nv>0)
		{
			resultado=obtemPI(nv);
			printf("%f\n",resultado);
		}	
	}
	while(nv>0);
}

float obtemPI(nv)
{
	int i,cont=0,c1=0,cod=3;
	float soma=0,c=2,b=1,div=0,ant=1;
	
	for(i=1; i<=nv; i++)
	{
		//if(cont<=2)
		{
			div=((float)c/b);
			//printf("Div %.0f/%.0f: %f\n",c,b,div);
			soma=div*ant;
			//printf("Soma: %f\n",soma);
			ant=soma;
			cont++;
			c1++;
		}
		if(cont==2)
		{
			b=b+2;
			cont=0;
		}
		if(c1==cod)
		{
			c1=0;
			cod=2;
			c=c+2;
		}
	}
		return soma;
}
