#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("\n%d x %d = %d\n",j,i,j*i);
		}
		printf("\n");
	}
	system("pause");
}
