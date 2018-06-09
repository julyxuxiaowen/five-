#includ <stido.h>
 int main()
 {
 	char c;
 	int letter=0,space=0,digit=0,other=0;
 	printf("Please input a line of characters:\n");
 	while((c=getchar())!='\n')
 	{
	 	if (c>'a'&&c<'z'||c>='A'&&c<='Z')
	 	letters++;
		 else if(c=='')
		 space++;
		 else if(c>='0'&&c<='9')
		 digit++;
		 else
		 other++; 
	 }
	 printf("letter:%d\n space:%d\n digit:%d\n other:%d\n",letter,space,digit,other);
	 return 0;
 }