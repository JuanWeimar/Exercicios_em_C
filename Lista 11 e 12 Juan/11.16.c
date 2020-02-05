#include <stdio.h>
#include <stdlib.h>
main()
{
	float idade,n1,m=0,armaid,mvelho=0,armanota;
	do
	{
		scanf("%f",&idade);
		if(idade>=0)
		{
			scanf("%f",&n1);
			if(n1>m)
			{
				m=n1;
				armaid=idade;
			}
			if(mvelho<idade)
			{
				mvelho=idade;
				armanota=n1;
			}
		}
		
	}
	while(idade>=0);
	printf("idade maior:%2.f\n",armaid);
	printf("nota do aluno mais velho:%2.f\n",armanota);
	system("pause");
}
