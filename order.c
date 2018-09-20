#include<stdio.h>
int main()
{
int x=1;
char *c=&x;

if(*c)
printf("little\n");
else
printf("big\n");
}

