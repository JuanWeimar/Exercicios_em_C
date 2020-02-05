#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,p=1,s=2,t=3,total=0;
	for(i=4; i<=15; i++)
	{
		total=t+(2*s)-p;
		p=s;
		s=t;
		t=total;
		if(i==15)
		printf("%d ",total);
	}
	system("pause");
}
