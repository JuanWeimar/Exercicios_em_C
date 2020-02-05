#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,a,b,soma=0,c=0;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a==b)
	{
	scanf("%d",&a);
	scanf("%d",&b);
	}
	if(a<b)
	{
		for(i=a; i<=b; i++)
		{
			if(i%2==1)
			{
			soma=soma+i;
			}
		}
	}
	if(a>b)
	{
		for(i=a; i>=b; i--)
		{
			if(i%3==0)
			{
			c++;
			soma=(soma+i);
			}
		}
		soma=soma/c;
	}
	printf("soma:%d\n",soma);
	system("pause");
}
