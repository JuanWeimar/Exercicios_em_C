#include <stdio.h>

main()
{
  int n,resp = 0,i,j,mat[4][4];
  printf("\nDigite valores para os elementos da matriz\n");
	
	for(i=0; i<4; i++)
		for(j=0; j<4; j++)
		{
			printf("\nElemento[%d][%d] = ",i,j);
			scanf("%d",&mat[i][j]);
		}
  
  printf("Digite o numero de cidades percorridas\n");
  scanf("%d",&n);
  int p[n];
  for(i=0;i<n;i++)
  {
                  printf("Digite a %d cidade\n", i+1);
                  scanf("%d", &p[i]);
  }
  for(j=0;j<n-1;j++)
  {
                  resp += mat[p[j]][p[j+1]];
  }


printf("A distancia total entre os pontos informados eh %d\n",resp);

}
