#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,divi,divi2,soma,total;
	for(i=1000; i<=9999; i++)
	{
		divi=i/100;
		divi2=i%100;
		soma=divi+divi2;
		total=soma*soma;
		if(i==total)
		{
			printf("%d ",i);
		}
	}
	system("pause");
}
