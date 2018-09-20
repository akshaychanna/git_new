#include <stdio.h>
 
int LitToBigEndian(int x);
 
int main( )
{
	int Little_Endian = 0x12345678 ;
	
	printf("\n Little_Endian = 0x%X\n",Little_Endian);
	
	printf("\n Big_Endian    = 0x%X\n",LitToBigEndian(Little_Endian));
 
}
 
int LitToBigEndian(int x)
{
return (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
}