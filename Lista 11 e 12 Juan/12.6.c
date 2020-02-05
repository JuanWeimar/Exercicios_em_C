#include <stdio.h>
#include <stdlib.h>
main()
{
	int vetz[10],i,q,aux,ref,vetw[10],qn,j=0;
	printf("digite o tamanho do vetor\n");
	scanf("%d",&q);
	for(i=0; i<q; i++)
	{
	scanf("%d",&qn);
	vetz[i]=qn;
	}
	//printf("%d ",vetz[i]);
	for(i=q-1; i>=0; i--){
	vetw[j]=vetz[i];
	j++;}
	for(i=0; i<q; i++){
	printf("%d ",vetw[i]);}
	
	system("pause");
}
	
