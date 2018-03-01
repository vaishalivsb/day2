#include<stdio.h>
int main()
{
	int N,a,i;
	scanf("%d",&N);
for(i=1;i<=N;i++)
{
	scanf("%d",&a);
	if(a%2==0)
	{
a=a/2;
printf("%d\n",a);
	}
	else
	{
		printf("%d",a);
	}
}
return 0;
