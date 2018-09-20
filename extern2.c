//#include<stdio.h>

extern int x;
f1()
{
printf("%d\n",x);
x=23;
f2();
}

