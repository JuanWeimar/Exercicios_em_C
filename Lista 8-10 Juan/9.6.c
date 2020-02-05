#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int i,c;
float nota1,nota2,qa,nf,media,perc;
media=0;
c=0;
	printf("digite a quantidade de alunos\n");
	scanf("%f",&qa);
	
 	for(i=1; i<=qa; i++){
 	printf("digite a primeira nota\n");
	scanf("%f",&nota1);
	printf("digite a segunda nota\n");
	scanf("%f",&nota2);
	nf=(nota1+nota2)/2;
	printf("nota final:%.2f\n",nf);
	if(nf>6)
	{
	media=media+nf;
	c++;
}
}
perc=(c/qa)*100;
media=media/c;
printf("media dos aprovados:%2.f\n",media);
printf("percentual de aprovados:%.2f\n",perc);
system("pause");
}
