#include <stdio.h>
int main()
{
	int i,sum=1;
	for(i=1;i<=10;i++)
	{
		printf("There are still %d peaches left on the %d day from last to last",sum,i);
		sum=(sum+1)*2;
	}
	return 0;
}




