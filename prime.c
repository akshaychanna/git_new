#include<stdio.h>

int main()
{
	int s,e;
	char a[500];
	printf("enter range:");
	scanf("%d %d",&s,&e);
	int i,cnt,j=0,temp=-1;
printf("s=%d e=%d\n",s,e);
	for(;s<=e;s++)
	{

		cnt=0;
		for(i=2;i<s;i++)
		{
			if(s%i==0)break;
		}
		if(i==s)
		{
		a[j++]=s;	
		temp++;	
		}
	}

	for(i=0;i<=temp;i++)
	{
		if(a[i+1]-a[i]==2)
		printf("\n%d %d\t",a[i],a[i+1]);
	}
}
