#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int v1,v2,v3;
printf("digite o primeiro valor\n");
scanf("%d",&v1);
printf("digite o segundo valor\n");
scanf("%d",&v2);
printf("digite o terceiro valor\n");
scanf("%d",&v3);
	if(v1>v2)
		if(v1>v3)
			printf("%d\n",v1);
	if(v2>v1)
		if(v2>v3)
			printf("%d\n",v2);
	if(v3>v1)
		if(v3>v2)
			printf("%d\n",v3);
system("pause");
}
