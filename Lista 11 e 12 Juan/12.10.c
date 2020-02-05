#include <stdio.h>
#include <stdlib.h>
main()
{
	int vet[10],i,n,v1,v2,c=0,c1=0,ct=0;
	
	for(i=0; i<=9; i++)
	{
	scanf("%d",&n);
		if(n>0){
		vet[i]=n;
		c1++;
	}
	else
	i=10;
	}

	do{
		scanf("%d",&v1);
	}
	while(v1>(c1-1));
	do{
		scanf("%d",&v2);
	}
	while(v2>(c1-1));
		
	if(v1>v2){
		for(i=v1; i>=v2; i--)
	{
		if(vet[i]>4)
		c++;
	}
			}
		
	if(v1<v2){
		for(i=v1; i<=v2; i++)
	{
		if(vet[i]>4)
		c++;	
		}
	}	
	
	
		printf("%d \n",c);
//	}
//	while(v1<=i || v2<=i);
	system("pause");}
