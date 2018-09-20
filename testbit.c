#include<stdio.h>

void test(int x)
{
	int bit=31;
	l:printf("%d",(x>>bit--)&1);
  	if(bit>=0)
	  goto l;
}

void set(int x,int bit)
{
x=x|(1<<bit);
test(x);
}

void clear(int x,int bit)
{
x=x&~(1<<bit);
test(x);
}


int main()
{
	int x=7;
	int bit;

	test(x);

	printf("\nenter bit number to set:"); 
	scanf("%d",&bit);
	set(x,bit);

	printf("\nenter bit number to clear:");
        scanf("%d",&bit);
        clear(x,bit);

}
