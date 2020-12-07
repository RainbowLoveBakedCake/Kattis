#include<stdio.h>
int main()
{
	char kata[101];
	char jawaban[101];
	scanf("%s",kata);
	printf("%c",kata[0]);
	for (int i=0;i<101;i++)
	{
		if (kata[i]=='-')
		{
			printf("%c",kata[i+1]);
		}
	}
	printf("\n");
	//printf("%c%c\n",kata[0],jawaban);
}
