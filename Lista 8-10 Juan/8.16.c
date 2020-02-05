#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int c,v,i;
c=0;
	printf("digite 10 valores\n");
 	for(i=0; i<=9; i++)
 	{
		scanf("%f",&v);
		if(v<0)
		c++;
}
	printf("valores negativos:%d\n",c);
	system("pause");
}
