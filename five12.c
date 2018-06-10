#include <stdio.h>
#include<conio.h>
 main()
{
	int i,j,k,m=6;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m;j++)
		printf("");
		for(k=1;k<2*i;k++)
		printf("*");
		printf("\n"); 
	}
	for(i=m-1;i>0;i--)
	{
		for(j=m-1;j>=i;j--)
		printf("");
		for(k=1;k<2*i;k++)
		printf("*");
		printf("\n");
	}
	getch();
}




