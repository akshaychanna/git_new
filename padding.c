#include<stdio.h>
#pragma pack(1)
struct xyz
{
//char a;
int x;
char u;
};

int main()
{
struct xyz a;
printf("%d\n",sizeof(a));
}
