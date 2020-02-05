#include <stdio.h>
#include <stdlib.h>
main()
{
	float j,num,Pi,par,m;
	float s=0;
	float i=1,n=4;
	scanf("%f",&num);
	while(num>0)
	{

	for(j=1,i=1;j<=num;j++,i=i+2)
	{		
			if(par==0)
				{
				Pi=Pi+(n/i);
				par=1;
			}
			else
				{
				Pi=Pi-(n/i);
				par=0;
				}
	}
	printf("soma:%.6f\n",Pi);
	par=0;
	Pi=0;
	scanf("%f",&num);
	}
	system("pause");
}
