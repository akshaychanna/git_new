#include<stdio.h>
int main()
{
	int j,i,cnt=0,prime=0,index=1;
	for(i=1;prime!=100;i++)
	{
		cnt=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0) break;
		}
		if(i==j)
		{
			printf("%d=%d\n ",index,i);
			prime++;
			index++;
		}
	}
}
