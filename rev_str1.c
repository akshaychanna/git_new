#include<stdio.h>

char *strrev(char *p)
{
	int i,j,k=2;
	char t;
	for(j=0;p[j];j++);
	j--;

	for(i=0;i<=j;)
	{
		t=p[i];
		p[i]=p[k];
		p[k]=t;
		i=i+3;
		k=k+3;
	}
	return p;
}


int main()
{
	char c[]="interview";
	printf("%s\n",strrev(c));
}
