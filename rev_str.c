#include<stdio.h>

char *strrev(char *p)
{
	int i,j;
	char t;
	for(i=0;p[i];i++);

	for(j=0,i--;j<i;j++,i--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
	return p;
}

int main()
{
	char c[]="akshay";

	printf("%s\n",strrev(c));
}
