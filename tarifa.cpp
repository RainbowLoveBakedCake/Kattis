#include<stdio.h>

int main()
{
	int monthly;
	scanf("%d",&monthly);
	
	int loop;
	scanf("%d",&loop);
	
	int total =0;
	
	for(int i=0;i<loop;i++)
	{
		int number;
		scanf("%d",&number);
		total+=number;
	}
	
	printf("%d\n",(loop+1)*monthly-total);
	return 0;
}
