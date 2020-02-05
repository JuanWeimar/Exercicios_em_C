#include <stdio.h>
main()
{
	char car1,car2;
	int i,n,c=0;
	printf("digite um numero\n");
	scanf("%d",&n);
	printf("digite um caractere\n");
	scanf("\n%c",&car1);
	printf("digite outro caractere\n");
	scanf("\n%c",&car2);
	for(i=1; i<=n; i++)
	{
		if(c<n)
		{
		printf("%c",car1);
		c++;
		}
		if(c!=n)
		{
		printf("%c",car2);
		c++;
		}
		if(c==n)
		break;
	}
}
