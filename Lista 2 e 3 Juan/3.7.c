#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int v1,v2,v3,v;
printf("digite o primeiro valor\n");
scanf("%d",&v1);
printf("digite o segundo valor\n");
scanf("%d",&v2);
printf("digite o terceiro valor\n");
scanf("%d",&v3);
	if(v1>=v2){
		if(v3>v2)
			v=v1+v3;
		else
			v=v1+v2;
				printf("%d\n",v);
}
	if(v2>=v1){
		if(v1>v3)
			v=v2+v1;
		else
			v=v2+v3;
				printf("%d\n",v);
}
system("pause");
}
