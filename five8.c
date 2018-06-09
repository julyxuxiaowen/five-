#include <stdio.h>
#include<math.h>
int main()
{
   int a,b,c,i,sum=0;
   for(i=100;i<1000;i++)
   {
   	a=i/100;
   	b=i%100/10;
   	c=i%10;
   	sum+=a*a*a+b*b*b+c*c*c;
   	if(sum==i)
   	{
	   	printf("%d is shuixianhua number.\n",i);
	   }
	   sum=0;
   }
	return 0;
} 



