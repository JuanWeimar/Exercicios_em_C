#include <stdio.h>
#include <stdlib.h>
main()
{
	float j,num,par;
	float s=0;
	float i,n=1000;
	scanf("%f",&num);
	while(num>0)
	{
	for(i=1; i<=num; i++,n=n-3)
	{
		if(par==1)
		{
		s=s-(n/i);
		par=0;
		}
		else
		{
		if(par==0)
		s=s+(n/i);
		par=1;
		}
	}
	printf("soma:%.6f\n",s);
	s=0;
	n=1000;
	par=0;
	scanf("%f",&num);
	}
	system("pause");
}
