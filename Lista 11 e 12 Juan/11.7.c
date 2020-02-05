#include <stdio.h>
#include <stdlib.h>
main()
{
	int n,soma;
	scanf("%d",&n);
	if(n%2==0)
	{
		soma=n*3;
	printf("soma:%d\n",soma);
	}
	if(n%2==1)
	{
		if(n==1)
		{
		n=5;
	printf("soma:%d\n",n);
		}
		else
		{
		soma=5+((n-1)*3);
	printf("soma:%d\n",soma);
		}
	}
	system("pause");
}
