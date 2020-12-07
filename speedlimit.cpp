#include<stdio.h>
#include<string.h>

int main()
{
	while(1)//ketika engga minus lanjut
	{
		int time1=0;
		//int distance;
		int loop;
		long long int velocity=0;
		scanf("%d",&loop);
		if(loop<0)
		{
			break;
		}
		for(int i=0;i<loop;i++)
		{
			int distance;
			int time2;
			scanf("%d %d",&distance,&time2);
			velocity+=distance*(time2-time1);
			time1=time2;
		}
		printf("%lld miles\n",velocity);
	}
	return 0;
}
