#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int gremio,inter;
printf("digite os gols do gremio\n");
scanf("%d",&gremio);
printf("digite os gols do inter\n");
scanf("%d",&inter);
	if(gremio==inter)
		printf("empate\n");
	else
	if(gremio>inter)
		printf("gremio\n");
	if(gremio<inter)
		printf("inter\n");
system("pause");
}
