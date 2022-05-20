#include<stdio.h>
#include<conio.h>
//fibonacci series in c
int main()
{
	int a=0,b=1,d,n,i;
	printf("how many number do you want?\t");
	scanf("%d",&n);
	printf("%d %d\t",a,b);
	for(i=0;i<n-2;i++)
	{
		d =a+b;
		printf("%d\t",d);
		a=b;
		b=d;
	}
	return 0;
}
