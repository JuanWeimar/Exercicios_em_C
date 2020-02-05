#include <stdio.h>
main()
{
	int mat[10][10],i,j,a=0,b=0,c=0,d=0,nl;
	printf("\nDigite valores para os elementos da matriz\n");
	
	printf("\ndigite o numero de linhas\n");
	scanf("%d",&nl);
	
	for(i=0; i<nl; i++)
		for(j=0; j<nl; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
	//	printf("a:%d \n",a);
	for(i=0; i<nl; i++)
	{
		for(j=0; j<nl; j++)
		{
			//printf("a:%d \n",a);
			if(i>=0 && i<=(nl-1)-(nl/2))
			{
				if(j>=0 && j<=(nl-1)-(nl/2))
				a=a+mat[i][j];
			}
			if(i>=nl/2 && i<=(nl-1))
			{
				if(j>=nl/2 && j<=(nl-1))
				b=b+mat[i][j];
			}
			if(i>=0 && i<=(nl-1))
			{
				if(j>=0 && j<=(nl-1) && j<=i)
				c=c+mat[i][j];
			}
			if(i>=0 && i<=(nl-1)-1)
			{
				//if(j==1 && j<=((nl-1)) || j>i)
				if(j>i)
				d=d+mat[i][j];
			}
		}
	}
			printf("a:%d \n",a);
			printf("b:%d \n",b);
			printf("c:%d \n",c);
			printf("d:%d \n",d);
			
}
