#include<stdio.h>


int main()
{
volatile int x=1;

while(x)
{
printf("x=%d\n",x);
x--;
}

}
