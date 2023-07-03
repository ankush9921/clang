#include<stdio.h> //# -> preprocessor , include -> to get support from another file, stdio.h -> liabrary

int main()	// main is built in function which tells that to convert the code into bianary
{
	int num,  ans, i;
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		ans=i*i*i;
		printf("%d\n",ans);
		
	}
	
	return 0;
} 
