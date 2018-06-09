#include <stdio.h>
main()
{
   int p,r,n,m,temp;
   printf("Please input two number for n,m:\n");
   scanf("%d %d",&n,&m);
  if (n<m)
  {
  	temp=n;
  	n=m;
  	m=temp;
  }
  p=n*m;
  while(m!=0)
  {
  	r=n%m;
  	n=m;
  	m=r;
  }
  printf("The gcd is:%d\n",n);
  printf("The lcm is:%d\n",p/n);
  return 0;
}
