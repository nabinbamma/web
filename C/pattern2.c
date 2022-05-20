/*patten in c
2
2 4
2 4  6 
2 4 6 8 

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=2;i<=6;i++)
	{
		for(j=1;j<i+2;j++){
		
		printf("%d\t",j);
	}
	printf("\n");
}
return 0;
}

