#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int c,v,i,d;
c=0;
d=0;
	printf("digite 10 valores\n");
 	for(i=0; i<=9; i++)
 	{
		scanf("%d",&v);
		if(v>=100 && v<=200){
		c++;
		}
		else
		d++;
}
	printf("dentro do intervalo:%d\n",c);
	printf("fora do intervalo:%d\n",d);
	system("pause");
}
