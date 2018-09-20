#include<stdio.h>

int mysizeof(char *p)
{
int i;
for(i=0;p[i];i++);
return ++i;
}

int main()
{
char c[]="akshay";
printf("sizeof=%d\n",sizeof(c));
printf("strlen=%d\n",strlen(c));
printf("mysizeof=%d\n",mysizeof(c));
}
