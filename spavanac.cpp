#include<stdio.h>

int main()
{
	int hour;
	int minutes;
	//int alarm;
	
	
	scanf("%d %d",&hour,&minutes);
	//alarm=minutes-45;
	minutes-=45;
	if(minutes<0)
	{
		minutes+=60;
		--hour;
		if(hour<0)
		{
			hour+=24;
		}
	}
	printf("%d %d\n",hour,minutes);
	return 0;
}
