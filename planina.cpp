#include<stdio.h>

int main()
{
	int angka;
	int x=2;
	int hasil;
	scanf("%d",&angka);
	while(angka--)
	{
		x+=x-1;
	}
	hasil=x*x;
	printf("%d\n",hasil);
}
