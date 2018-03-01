#include<stdio.h>
int main()
{
	int N,K,a,i,c=0;
	scanf("%d%d",&N,&K);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a);
		if(a%2!=0)
		{
			c++;
		}
		if(c==K)
		{
			printf("%d",a);
		}
	}
	return 0;
}
